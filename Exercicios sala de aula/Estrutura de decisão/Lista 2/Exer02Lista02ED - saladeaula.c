/* 2) Ler três valores inteiros, encontrar e mostrar o número do meio. Idem a 
observação do exercício anterior. */
#include <stdio.h>

int main(void)
{
    int valor1, valor2, valor3;
    int meio;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);

    printf("Insira o terceiro valor: ");
    scanf("%d", &valor3);

    if (valor1 > valor2 && valor1 < valor3 || valor1 < valor2 && valor1 > valor3)
    {
        meio = valor1;
    }
    else if (valor2 > valor1 && valor2 < valor3 || valor2 < valor1 && valor2 > valor3)
    {
        meio = valor2;
    }
    else
    {
        meio = valor3;
    }
    printf("O numero do meio entre eles: %d, %d e %d é o numero %d", valor1, valor2, valor3, meio);

    return 0;
}
