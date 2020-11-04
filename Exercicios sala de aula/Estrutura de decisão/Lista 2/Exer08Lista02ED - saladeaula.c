/* 8) Ler um número e utilizando uma estrutura if else if  else if... (obrigatoriamente 
encadeada) informar se ele é:

a) divisível somente por 5, por 3 ou por 2;
Exemplo: 25 divisível somente por 5

b) não é divisível por nenhum destes;
Exemplo: 7 não é divisível por 5, 3 ou 2;

c) se é divisível por todos eles;
Exemplo: 30 é divisível por 2, 3 e 5.

d) se ele é divisível somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
Exemplo: 15 é divisível somente por 3 e por 5.
Exemplo: 10 é divisível somente por 5 e por 2.
Exemplo: 6 é divisível somente por 3 e por 2. */
#include <stdio.h>

int main(void)
{
    int numero;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    /* 2,3,5 -- 2,3 -- 2,5 -- 3,5 -- 2 -- 3 -- 5 -- */

    if (numero % 2 == 0 && numero % 3 == 0 && numero % 5 == 0)
    {
        printf("%d é divisivel por 2, 3 e 5\n", numero);
    }

    else if (numero % 2 == 0 && numero % 3 == 0)
    {
        printf("%d é divisivel por 2 e 3\n", numero);
    }

    else if (numero % 2 == 0 && numero % 5 == 0)
    {
        printf("%d é divisivel por 2 e 5\n", numero);
    }

    else if (numero % 3 == 0 && numero % 5 == 0)
    {
        printf("%d é divisivel por 3 e 5\n", numero);
    }

    else if (numero % 2 == 0)
    {
        printf("%d é divisivel por 2\n", numero);
    }

    else if (numero % 3 == 0)
    {
        printf("%d é divisivel por 3\n", numero);
    }

    else if (numero % 5 == 0)
    {
        printf("%d é divisivel por 5\n", numero);
    }

    system("pause");
    return (0);
}
