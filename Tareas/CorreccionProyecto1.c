#include <stdio.h>
#include <math.h>

#define Niter 100
#define Nplaca 5
#define limiteequilibrio 0.1


int lecturaplaca(FILE* archivo, double Tinicial[Nplaca][Nplaca]) {
    for (int i = Nplaca - 1; i >= 0; i--) {
        for (int j = 0; j < Nplaca; j++) {
            if (fscanf(archivo, "%lf", &Tinicial[i][j]) != 1) {
                printf("Error al leer los datos del archivo en la posición [%d][%d]\n", i, j);
                fclose(archivo);
                return 1;
            }
        }
    }
    fclose(archivo);
    return 0;
}

int main(int nArgs, char* args[]) {
    if (nArgs < 2) {
        printf("Uso correcto: %s archivodeentrada.txt\n", args[0]);
        return 1;
    }

    FILE* archivoentrada = fopen(args[1], "r");
    if (archivoentrada == NULL) {
        printf("Error al abrir el archivo %s\n", args[1]);
        return 1;
    }

    double Tviejo[Nplaca][Nplaca];
    if (lecturaplaca(archivoentrada, Tviejo) != 0)
        return 1;

    double Tnuevo[Nplaca][Nplaca];

    // Copiar bordes
    for (int i = 0; i < Nplaca; i++) {
        Tnuevo[i][0] = Tviejo[i][0];
        Tnuevo[i][Nplaca - 1] = Tviejo[i][Nplaca - 1];
        Tnuevo[0][i] = Tviejo[0][i];
        Tnuevo[Nplaca - 1][i] = Tviejo[Nplaca - 1][i];
    }

    int iteracion = 1;
    char archivoactual[20];

    while (iteracion <= Niter) {
        double equilibriomax = 0.0;

       
        for (int i = 1; i < Nplaca - 1; i++) {
            for (int j = 1; j < Nplaca - 1; j++) {
                Tnuevo[i][j] = (Tviejo[i][j - 1] + Tviejo[i][j + 1] +
                                Tviejo[i - 1][j] + Tviejo[i + 1][j]) / 4.0;
                double equilibrio = fabs(1.0 - (Tviejo[i][j] / Tnuevo[i][j]));
                if (equilibrio > equilibriomax)
                    equilibriomax = equilibrio;
            }
        }

     
        sprintf(archivoactual, "salida%d.txt", iteracion);
        FILE* archivoN = fopen(archivoactual, "w");
        if (archivoN == NULL) {
            printf("No se pudo crear el archivo %s\n", archivoactual);
            return 1;
        }

        for (int i = Nplaca - 1; i >= 0; i--) {
            for (int j = 0; j < Nplaca; j++) {
                fprintf(archivoN, "%.6lf ", Tnuevo[i][j]);
                Tviejo[i][j] = Tnuevo[i][j]; 
            }
            fprintf(archivoN, "\n");
        }
        fclose(archivoN);

        
        if (equilibriomax < limiteequilibrio) {
            printf("Equilibrio alcanzado en la iteración %d\n", iteracion);
            break;
        }

        iteracion++;
    }

    return 0;
}

