#include <stdio.h>
int main(void)
{
    float salbase;
    float gratif;
    float salbruto;
    float salliq;
    float IR;

    printf("Insira seu Salario Base: ");
    scanf("%f", &salbase);

    printf("Insira gratif: ");
    scanf("%f", &gratif);

    salbruto = salbase + gratif;

    if (salbruto < 1000)
    {
        IR = salbruto * (15 / 100);
        salliq = salbruto - IR;
        printf("Salario Liquido R$: %.2f\n", salliq);
    }
    else
    {
        IR = salbruto * (20 / 100);
        salliq = salbruto - IR;
        printf("Salario Liquido R$: %.2f\n", salliq);
    }

    system("pause");
    return (0);
}
