#include <stdio.h> <stdlib.h> <string.h>

unsigned int inverte(unsigned int x);

int main (void) {

    unsigned int x, x_invertido;
    do {
        printf("Informe x: ");
        scanf("%u", &x);
    } while (x < 0);

    x_invertido = inverte(x);
    printf("%u invertido = %d\n", x, x_invertido);

    return 0;
}

unsigned int inverte(unsigned int x) {
    unsigned int n_invertido;
    
}