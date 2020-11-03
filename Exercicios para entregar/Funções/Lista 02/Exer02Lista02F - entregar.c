/* 2) Elaborar uma função que verifica se um número é palíndromo. Um número é palíndromo ou
capicua quando ele não muda se lido da esquerda para a direita ou da direita para a esquerda. Por
exemplo, 2112 possui essa característica. Elaborar uma função que verifique se um número, que
contenha entre 2 e 4 dígitos, atende a essa característica.
Utilizando essa função:
a) Verificar se um número qualquer informado pelo usuário possui essa característica.
b) Apresentar os números entre 10 e 9999 que possuem essa característica. */
#include <stdio.h>

char Palindromo(int numero);

int main(void)
{
    char repetir;
    int numero;
    int i;
    char opcao;

    do
    {
        system("cls");
        printf("1 - Verificar se um numero de 2 e 4 digitos é palindromo\n");
        printf("2 - Apresentar os numeros entre 10 e 9999 que são palindromos\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);
        switch (opcao)
        {
        case '1':
        {
            printf("Insira um numero entre 2 e 4 digitos para verificar se é Palindromo: ");
            scanf("%d", &numero);
            printf("O numero %d ", numero);
            if (Palindromo(numero) == 's')
            {
                printf("é palindromo\n");
            }
            else
            {
                printf("nao é palindromo\n");
            }
            break;
        }
        case '2':
        {
            for (i = 10; i <= 9999; i++)
            {
                if (Palindromo(i) == 's')
                {
                    printf("%d\t", i);
                }
            }
            break;
        }
        default:
        {
            printf("Opcao Invalida !!!\n");
        }
        }
        printf("\nDeseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 's' || repetir == 'S');

    return 0;
}

char Palindromo(int numero)
{
    int u, d, c, m;

    if (numero >= 10 && numero <= 99)
    {
        u = numero % 10;
        d = numero % 100 / 10;
        if (d == u)
        {
            return ('s');
        }
    }
    else if (numero >= 100 && numero <= 999)
    {
        u = numero % 10;
        c = numero / 100;
        if (u == c)
        {
            return ('s');
        }
    }
    else if (numero >= 1000 && numero <= 9999)
    {
        m = numero / 1000;
        c = (numero % 1000) / 100;
        d = (numero % 1000) % 100 / 10;
        u = (numero % 1000) % 100 % 10;
        if (m == u && c == d)
        {
            return ('s');
        }
    }
    return ('n');
}
