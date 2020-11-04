/*1) Ler três valores inteiros, encontrar e mostrar o menor deles. Deve ser criada uma 
variável para armazenar o menor.
Observação: o algoritmo deverá existir apenas uma instrução printf para apresentar 
o menor e no formato:
printf("menor entre %d,  %d e %e é %d", num1, num2, num3, menor); */
#include <stdio.h>

int main(void)
{
    int valor1, valor2, valor3;
    int menor;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);

    printf("Insira o terceiro valor: ");
    scanf("%d", &valor3);

    // menor
    if (valor1 < valor2 && valor1 < valor3)
    {
        menor = valor1;
    }
    else if (valor2 < valor3)
    {
        menor = valor2;
    }
    else
    {
        menor = valor3;
    }
    printf("O menor numero entre %d, %d e %d é o numero %d", valor1, valor2, valor3, menor);

    return 0;
}
