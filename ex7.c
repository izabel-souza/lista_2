#include <stdio.h> <stdlib.h> <string.h>

float salario_semanal(int horas_trabalhadas, float valor_hora);

int main (void) {

    int horas_trabalhadas;
    float valor_hora, salario;
    printf("Informe o numero de horas trabalhadas e o valor da hora: ");
    scanf("%d %f", &horas_trabalhadas, &valor_hora);

    salario = salario_semanal(horas_trabalhadas, valor_hora);
    printf("Salario semanal = R$%f", salario);

    return 0;
}

float salario_semanal(int horas_trabalhadas, float valor_hora) {
    float salario;
    if (horas_trabalhadas <= 40) {
        salario = (horas_trabalhadas * valor_hora);
    }
    else if (horas_trabalhadas <= 60) {
        salario = ((horas_trabalhadas * valor_hora) + (horas_trabalhadas * 0.5));
    }
    else {
        salario = ((horas_trabalhadas * valor_hora) + (horas_trabalhadas * 1));
    }
    return salario;
}