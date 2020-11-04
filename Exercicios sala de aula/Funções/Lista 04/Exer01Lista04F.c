/* 1) Fazer uma função para verificar se um número é quadrado perfeito. Um número é quadrado
perfeito se pode ser obtido com a soma dos n primeiros números ímpares iniciando em 1. Por
exemplo, 9, é quadrado perfeito porque a raiz quadrada é 3 ou porque 1 + 3 + 5 = 9 (soma dos n
primeiros números ímpares inciando em 1). Essa função recebe como parâmetro um valor inteiro e
retorna 's' se o número é um quadrado perfeito e 'n' caso não.
Usar essa função para (usar obrigatoriamente a mesma função):
a) Ler um número inteiro informado pelo usuário é verificar se o mesmo é um quadrado perfeito.
b) Ler um número float informado pelo usuário e verificar se a parte inteira desse número é um
quadrado perfeito.
c) Mostrar os números que são quadrados perfeitos de um intervalo, com os valores (limite superior
e inferior) informados pelo usuário. */
#include <stdio.h>

char CalculaQuadradoperfeito(int numero);

int main(void)
{
    char repetir;
    char opcao;
    int i;
    int valor1;
    int valor2;
    float numero;
    char quadrado;

    do
    {
        system("cls");
        printf("A - Ler um numero inteiro e verificar se o mesmo é quadrado perfeito\n");
        printf("B - Ler um numero float e considerar so a parte inteira e verificar se é quadrado perfeito\n");
        printf("C - Mostrar os numeros que sao quadrados perfeitos de um intervalo\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);
        switch (opcao)
        {
        case 'A':
        case 'a':
        {
            printf("Insira um numero inteiro positivo: ");
            scanf("%d", &valor1);
            if (CalculaQuadradoperfeito(valor1) == 's')
            {
                printf("O numero %d é um quadrado perfeito !!!\n", valor1);
            }
            else
            {
                printf("O numero %d não é um quadrado perfeito !!!\n", valor1);
            }
            break;
        }

        case 'B':
        case 'b':
        {
            printf("Insira um numero float positivo: ");
            scanf("%f", &numero);
            valor1 = (int)numero;
            if (CalculaQuadradoperfeito(valor1) == 's')
            {
                printf("O numero %d é um quadrado perfeito !!!\n", valor1);
            }
            else
            {
                printf("O numero %d não é um quadrado perfeito !!!\n", valor1);
            }
            break;
        }

        case 'C':
        case 'c':
        {
            printf("Insira um numero inteiro positivo inferior para seu intervalo: ");
            scanf("%d", &valor1);
            printf("Insira um numero inteiro positivo superior para seu intervalo: ");
            scanf("%d", &valor2);
            printf("TODOS ESSES NUMEROS POSSUEM QUADRADO PERFEITO:\n\n");
            for (i = valor1; i <= valor2; i++)
            {
                if (CalculaQuadradoperfeito(i) == 's')
                {
                    printf("%d\t", i);
                }
            }
            printf("\n\n");
            break;
        }

        default:
        {
            printf("Opcao Invalida !!!\n");
        }
        }
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

char CalculaQuadradoperfeito(int numero)
{
    int i;
    int somaimpar = 0;
    for (i = 1; i <= numero; i = i + 2)
    {
        somaimpar = somaimpar + i;
        if (somaimpar == numero)
        {
            return ('s');
        }
    }
    return ('n');
}
