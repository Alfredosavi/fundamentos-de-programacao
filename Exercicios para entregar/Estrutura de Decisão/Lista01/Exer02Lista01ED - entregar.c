/* 2) Ler dois valores numéricos e apresentar a diferença entre eles.
A diferença sempre é positiva, portanto, o menor é subtraído do maior não importando
a ordem em que os números são informados. */
#include <stdio.h>

int main(void)
{
    int valor1, valor2;
    int resultado;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 > valor2)
    {
        resultado = valor1 - valor2;
    }
    else
    {
        resultado = (valor2 - valor1);
    }
    printf("O resultado da diferença é de %d", resultado);

    system("pause");
    return (0);
}
