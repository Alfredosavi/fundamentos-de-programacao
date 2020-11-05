/* 11) Ler um número inteiro e determinar se o mesmo é primo. 
Um número é primo quando é divisível de maneira exata somente por 1 e por ele mesmo. */
#include <stdio.h>

int main(void)
{
    int i;
    int numero;
    int resto;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    for (i = 1; i < numero; i = i + 1)
    {
        resto = numero % i;
        if (resto == 0)
        {
            printf("não é primo\n");
            i = i + 1;
        }
        else
        {
            printf("primo\n");
        }
    }

    system("pause");
    return (0);
}
