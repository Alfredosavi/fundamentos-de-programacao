/* 2) Ler um número inteiro e determinar se o mesmo é primo. Um número é primo quando
é divisível de maneira exata somente por 1 e por ele mesmo. Necessário que o algortimo
seja otimizado, o processamento tem que ser o mínimo possível. */
#include <stdio.h>

int main(void)
{
    int numero;
    int i, qtde = 0;

    printf("Insira um numero inteiro para verificar se � primo: ");
    scanf("%d", &numero);

    for (i = 2; i <= numero / 2; i = i + 1)
    {
        if (numero % i == 0)
        {
            qtde++;
            break;
        }
    }

    if (qtde == 0)
    {
        printf("O numero %d e Primo !!!\n", numero);
    }

    else
    {
        printf("O numero %d nao e Primo !!!\n", numero);
    }

    return 0;
}
