#include <stdio.h> <stdlib.h> <string.h>

int somatorio_impares(int n);

int main (void) {

    int n, somatorio;
    do {
        printf("Informe a quantidade de numeros que devem ser somados: ");
        scanf("%d", &n);
    } while (n < 0);

    somatorio = somatorio_impares(n);
    printf("A soma dos primeiros %d numeros impares = %d", n, somatorio);

    return 0;
}

int somatorio_impares(int n) {
    
    int soma = 0;
    for(int i = 0; i < (2*n); i++) {
        if(i % 2 != 0) {
            soma += i;
        }
    }
    
    return soma;
}