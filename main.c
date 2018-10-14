// Fermín Narváez Reyes A01411229
#include <stdio.h>

int main(void) {
    // Output donde le pido al usuario el tamaño del array
    int n;
    printf("Define el tamaño del arreglo: ");
    scanf("%i", &n);

    // Mayor de 1 y menor de 10
    if(n>1&&n<=10){
        int x[n][n]; // Definir matrices
        int be[n][n]; // Definir matrices
        int c[n][n]; // Definir matrices
        printf("Datos de la matriz x\n");
        // Captura  matriz x
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("Escribe el número [%d][%d]:", i,j);
                scanf("%d",&x[i][j]);
            }
        }

        printf("Captura de datos de la matriz be\n");
        // Captura matriz be
        for(int i=0;i<n;i++){ // Regla
            for(int j=0;j<n;j++){ // Regla
                printf("Escribe el número [%d][%d]:", i,j); // Output
                scanf("%d",&be[i][j]);
            }
        }

        printf("La matriz x es"); // Mostrar los valores de la matriz a
        printf("\n"); 
        for(int i=0;i<n;i++){ // Regla
            for(int j=0;j<n;j++){ // Regla
                printf("%d ", x[i][j]); // Output
            }
            printf("\n");
        }

        printf("\nLa matriz be es"); // Mostrar los valores de la matriz b
        printf("\n");
        for(int i=0;i<n;i++){ // Regla
            for(int j=0;j<n;j++){ // Regla
                printf("%d ", be[i][j]); // Output
            }
            printf("\n");
        }

        // Regla entre x y be
        for(int i=0;i<n;i++){ // Regla
            for(int j=0;j<n;j++){ // Regla
                c[i][j]=x[i][j]+be[i][j];
            }
        }
        printf("\n");
        printf("La matriz c es\n"); // Mostrar los valores de la matriz resultante c
        for(int i=0;i<n;i++){ // Regla
            for(int j=0;j<n;j++){ // Regla
                printf("%d ", c[i][j]); // Output matriz c
            }
            printf("\n");
        }
    } else {
        printf("No permitido");
    }
    return 0;
}
