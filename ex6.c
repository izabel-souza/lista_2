#include <stdio.h> <stdlib.h> <string.h> 

int sorteio();
int chute();
void n_sorteado(int chute_valor, int sorteio_valor);

int main (void) {

    int chute_valor = chute();
    int sorteio_valor = sorteio();
    n_sorteado(chute_valor, sorteio_valor);
    return 0;
}

int chute () {
    int x;
    do {
        printf("Informe um numero de 0 a 100: ");
        scanf("%d", &x);
    } while ((x < 0) || (x > 100));
    return x;
}

int sorteio() {
    int n = rand() % 101;
    return n;
}

void n_sorteado(int chute_valor, int sorteio_valor) {

    int chutes = 0, novo_valor;
    if (chute_valor == sorteio_valor) {
        chutes++;
        printf("Chute certo");
    }
    if (chute_valor > sorteio_valor) {
        chutes++;
        printf("Valor chutado maior que o valor sorteado\n");
        novo_valor = chute();
        n_sorteado(novo_valor, sorteio_valor);
    }
    if (chute_valor < sorteio_valor) {
        chutes++;
        printf("Valor chutado menor que o valor sorteado\n");
        novo_valor = chute();
        n_sorteado(novo_valor, sorteio_valor);
    }
}