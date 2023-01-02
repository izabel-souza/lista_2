#include <stdio.h> <stdlib.h> <string.h>

void composto_primo(int n);

int main (void) {

    int n;
    do {
        printf("Informe n: ");
        scanf("%d", &n);
    }while (n < 0);

    composto_primo(n);

    return 0;
}

void composto_primo(int n) {
    int divisores = 0;
    for(int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("%d e ", n);
    if (divisores == 2) {
        printf("primo");
    }
    else {
        printf("composto");
    }
}