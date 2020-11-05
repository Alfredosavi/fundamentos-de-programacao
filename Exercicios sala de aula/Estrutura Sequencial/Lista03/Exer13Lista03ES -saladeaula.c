/* 13 Desafio) Obter o resto da divisão de dois valores informados pelo usuário, sem usar o
operador de resto. */
#include <stdio.h>

int main(void)
{
    float valor_1;
    float valor_2;
    float resultado;
    int numerointeiro;
    int variavel;

    printf("Insira o 1 valor: ");
    scanf("%f", &valor_1);

    printf("Insira o 2 valor: ");
    scanf("%f", &valor_2);

    resultado = valor_1 / valor_2;
    numerointeiro = resultado;
    variavel = valor_1 - (numerointeiro * valor_2);

    printf("A divisão %.f / %.f da resto = %d\n", valor_1, valor_2, variavel);

    system("pause");
    return (0);
}
