/* 2) Escreva um algoritmo que leia um número e verifique se ele é maior, menor ou 
igual a 10. */
#include <stdio.h>

int main(void)
{
    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    if (num < 10)
    {
        printf("%d menor que 10\n", num);
    }
    else if (num == 10)
    {
        printf("%d igual a 10\n", num);
    }
    else
    {
        printf("%d maior que 10\n", num);
    }

    return 0;
}
