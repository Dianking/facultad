#include <stdio.h>

int main() {
    int tam1 = 5; // Tamaño del primer vector
    int tam2 = 5; // Tamaño del segundo vector
    int vec1[] = {1, 2, 3, 4, 5};
    int vec2[] = {3, 6, 7, 3, 5};

    printf("Valores que se repiten en los dos vectores:\n");

    int encontrado = 0; // Variable de bandera

    for (int i = 0; i < tam1; i++) {
        for (int j = 0; j < tam2; j++) {
            if (vec1[i] == vec2[j]) {
                encontrado = 1; // Se encontró una coincidencia
                printf("%d\n", vec1[i]);
            }
        }
    }

    if (!encontrado) {
        printf("No se encontraron coincidencias entre los vectores.\n");
    }

    return 0;
}
