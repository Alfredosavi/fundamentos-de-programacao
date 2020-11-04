/* 2) Fazer funções para:
a) Mostrar os divisores de um número.
b) Calcular a quantidade de divisores de um número. Essa quantidade deve ser retornada da função.
c) Encontrar a maior quantidade de divisores de um intervalo de números. Essa quantidade deve ser
retornada da função.
d) Encontrar o número que possui a maior quantidade de divisores de um intervalo de números. O
número deve ser retornado da função.
 Para implementar as funções em c) e d) deve, obrigatoriamente, ser utilizada a função em b)
 Utilizando, obrigatoriamente essas quatro funções, ler dois valores que representam os limites de
um intervalo de valores e apresentar da seguinte forma (informados 10 e 13 como intervalo):
10 = 1, 2, 5, 10. 4 divisores.
11 = 1, 11. 2 divisores.
12 = 1, 2, 3, 4, 6, 12. 6 divisores.
13 = 1, 13. 2 divisores.
A maior quantidade de divisores desse intervalo é 6 e pertence ao número 12. */
#include <stdio.h>

void MostraDivisores(int valor);
int CalculaQuantidadeDivisores(int valor);
int MaiorQtdeDivisores(int valor1, int valor2);
int FindNumMaiorQtde(int valor1, int valor2);

int main(void)
{
    char repetir;
    int valor1, valor2;
    int i;

    do
    {
        system("cls");
        printf("Informe um valor para o limite inferior do intervalo: ");
        scanf("%d", &valor1);

        printf("Informe um segundo valor para o limite superior do intervalo: ");
        scanf("%d", &valor2);

        for (i = valor1; i <= valor2; i++)
        {
            MostraDivisores(i);
            printf("   Divisores = %d", CalculaQuantidadeDivisores(i));
            printf("\n");
        }
        printf("\n");
        printf("A maior quantidade de divisores desse intervalo é %d e pertence ao numero %d.\n\n", MaiorQtdeDivisores(valor1, valor2), FindNumMaiorQtde(valor1, valor2));
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

void MostraDivisores(int valor)
{
    int i;
    if (valor == 1)
    {
        printf("1 => 1.");
    }
    else
    {
        printf("%d => 1, ", valor);
        for (i = 2; i <= valor / 2; i++)
        {
            if (valor % i == 0)
            {
                printf("%d, ", i);
            }
        }
        printf("%d.", valor);
    }
}

// Funcao para calcular a quantidade de divisores do numero B)
int CalculaQuantidadeDivisores(int valor)
{
    int i;
    int qtde = 2;

    if (valor == 1)
    {
        qtde = 1;
    }
    else
    {
        for (i = 2; i <= valor / 2; i++)
        {
            if (valor % i == 0)
            {
                qtde++;
            }
        }
    }
    return (qtde);
}

// Funcao para encontrar a maior quantidade de divisores de um intervalo de numeros. Return(qtde) C)
int MaiorQtdeDivisores(int valor1, int valor2)
{
    int i;
    int qtde = 0;
    char primeiro = 'r';
    if (valor1 > valor2)
    {
        i = valor2;
        valor2 = valor1;
        valor1 = i;
    }
    for (i = valor1; i <= valor2; i++)
    {
        if (primeiro == 'r')
        {
            qtde = CalculaQuantidadeDivisores(i);
            primeiro = 's';
        }
        else
        {
            if (qtde < CalculaQuantidadeDivisores(i))
            {
                qtde = CalculaQuantidadeDivisores(i);
            }
        }
    }
    return (qtde);
}

// Funcao para encontrar o numero que possui a maior quantidade de divisores. Return(num) D)
int FindNumMaiorQtde(int valor1, int valor2)
{
    int i;
    int numero;
    int qtde = 0;
    char primeiro = 'r';
    if (valor1 > valor2)
    {
        i = valor2;
        valor2 = valor1;
        valor1 = i;
    }
    for (i = valor1; i <= valor2; i++)
    {
        if (primeiro == 'r')
        {
            qtde = CalculaQuantidadeDivisores(i);
            numero = i;
            primeiro = 's';
        }
        else
        {
            if (qtde < CalculaQuantidadeDivisores(i))
            {
                qtde = CalculaQuantidadeDivisores(i);
                numero = i;
            }
        }
    }
    return (numero);
}
