#include <stdio.h> <stdlib.h> <string.h>

void fibonacci(int n);

int main (void) {

    int n;
    do {
        printf("Informe o numero de termos: ");
        scanf("%d", &n);
    } while (n < 0);
    fibonacci(n);

    return 0;
}

void fibonacci(int n) {
    int anterior = 1, atual = 1, proximo;
    printf("%d %d ", anterior, atual);
    for(int i = 3; i <= n; i++) {
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
        printf("%d ", proximo);
    }
}