#include <stdio.h> <stdlib.h> <string.h>

void potencia(int base, int expoente);

int main (void) {

    int base, expoente;
    printf("Informe base e expoente: ");
    scanf("%d %d", &base, &expoente);
    potencia(base, expoente);

    return 0;
}

void potencia(int base, int expoente) {
    int potenciacao = 1;
    for(int i = 1; i <= expoente; i++) {
        potenciacao *= base;
    }
    printf("%d^%d = %d", base, expoente, potenciacao);
}