#include <stdio.h> <stdlib.h> <string>

int mdc(int x, int y);

int main (void) {

    int x, y, mdc_valor;
    do {
        printf("Informe x e y: ");
        scanf("%d %d", &x, &y);
    } while ((x < 0) || (y < 0));

    mdc_valor = mdc(x, y);
    printf("MDC de %d e %d = %d", x, y, mdc_valor);

    return 0;
}

int mdc(int x, int y) {
    int mdc_n = (x > y) ? (x % y) : (y % x);
    return mdc_n;
}