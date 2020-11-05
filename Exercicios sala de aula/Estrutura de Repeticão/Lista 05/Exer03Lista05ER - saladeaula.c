/* 3) Elaborar um programa para implementar a operação de potência. */
#include <stdio.h>

int main(void)
{
    int base;
    int expoente;
    int conta = 0;
    int i;

    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe o expoente: ");
    scanf("%d", &expoente);

    for (i = base; i <= expoente; i++)
    {
        conta = (base * i) + conta;
    }
    printf("Resultado = %d\n", conta);

    system("pause");
    return (0);
}
