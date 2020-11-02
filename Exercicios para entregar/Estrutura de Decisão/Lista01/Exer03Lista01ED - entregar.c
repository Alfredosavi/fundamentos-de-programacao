/* 3) Faca um algoritmo que leia o genero, a idade e o tempo de trabalho de uma pessoa e determine
se ela pode se aposentar. Assuma que homens se aposentam com 45 anos de trabalho ou idade superior 
a 70 anos e mulheres de aposentam com 40 anos de trabalho ou idade superior a 65 anos. */
#include <stdio.h>

int main(void)
{
    int idade;
    int tempo;
    char pessoa;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    printf("Insira o tempo de trabalho: ");
    scanf("%d", &tempo);

    fflush(stdin);

    printf("Insira o seu genero: ");
    scanf("%c", &pessoa);

    if (pessoa == 'f' || pessoa == 'F')
    {
        if (idade > 65 || tempo > 40)
        {
            printf("Voce pode se aposentar!!!\n");
        }
        else
        {
            printf("Voce nao pode ser aposentar ainda!!!\n");
        }
    }

    else if (pessoa == 'm' || pessoa == 'M')
    {
        if (idade > 70 || tempo > 45)
        {
            printf("Voce pode se aposentar!!!\n");
        }
        else
        {
            printf("Voce nao pode ser aposentar ainda!!!\n");
        }
    }

    system("pause");
    return (0);
}
