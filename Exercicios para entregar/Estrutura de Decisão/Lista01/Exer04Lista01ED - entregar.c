/* 4) Ler um número ponto flutuante (float):
a) Se o número lido é menor que 100, separar a parte inteira e a parte decimal e mostrá-las
 separadamente.
b) Se o número lido é maior ou igual a 100, obter o resto da divisão desse número por 3 e
mostrar esse resto. */
#include <stdio.h>

int main(void)
{
    double numero;
    int parte_inteira;
    float parte_decimal;
    float divisao;

    printf("Insira um numero float: ");
    scanf("%lf", &numero);

    if (numero < 100)
    {
        parte_inteira = numero;
        printf("Parte inteira: %d\n", parte_inteira);

        parte_decimal = (numero - parte_inteira);
        printf("Parte Decimal %f\n", parte_decimal);
    }

    else
    {
        divisao = (int)numero % 3;
        printf("O resto da divisão de %.f por 3 é de: %f", numero, divisao);
    }
}
