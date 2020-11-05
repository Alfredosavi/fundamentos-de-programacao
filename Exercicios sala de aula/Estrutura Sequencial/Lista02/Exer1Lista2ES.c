/* 1) Ler dois números reais (ponto flutuante) e apresentar, sem utilizar funções
matemáticas prontas:
    a) A divisão do primeiro número pelo segundo, armazenando somente a parte
        inteira do número.
    b) A soma dos dois números com o resultado arredondado para o próximo número
        inteiro.
Fazer o mesmo exercício utilizando funções da biblioteca <math.h>. É necessário
incluá-la com # include <math.h>
A função int ceil (float num) faz arredondamento do número para cima, ou seja,
para o próximo inteiro.
A função int trunc (float num) apanha apenas a parte inteira do número,
desconsiderando a sua parte decimal.
Exemplo de uso de funções com retorno:
truncar um numero:
int NumeroTruncado;
NumeroTruncado = trunc(Numero); */
#include <stdio.h>
#include <math.h>

int main(void)
{
    float num1;
    float num2;
    int resultado;

    printf("Insira o 1 numero: ");
    scanf("%f", &num1);

    printf("Insira o 2 numero: ");
    scanf("%f", &num2);

    resultado = (int)(num1 / num2);
    printf("%.f / %.f = %.d\n", num1, num2, resultado);

    resultado = (num1 + num2) + 0.999999;
    printf("%.f + %.f = %.d\n", num1, num2, resultado);

    printf("Com uso de funções\n");

    resultado = trunc(num1 / num2); // truncar (apanhar somente a parte inteira) do numero
    printf("%.f / %.f = %.d\n", num1, num2, resultado);

    resultado = ceil(num1 + num2); // arredondar para o proximo inteiro
    printf("%.f / %.f = %.d\n", num1, num2, resultado);

    system("pause");
    return (0);
}
