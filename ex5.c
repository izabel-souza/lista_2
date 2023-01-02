#include <stdio.h> <stdlib.h> <string.h>

void somatorio(int x, int z);

int main (void) {

    int x, z;
    do {
        printf("Informe x e z: ");
        scanf("%d %d", &x, &z);
    } while (z < x);

    somatorio(x, z);

    return 0;
}

void somatorio(int x, int z) {
    int soma = 0;
    for(int i = x; i < z; i++) {
        soma++;
        if (soma <= z) {
            break;
        }
        printf("%d \n", x);
    }
    printf("somatorio de %d numeros", soma);
}