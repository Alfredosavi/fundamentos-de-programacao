/* 3) Fazer funções para:

a) mostrar os múltiplos de y entre 1 (se for o caso) e 'x', sendo 'x' o valor até o qual os 
múltiplos de y devem ser mostrados. A função recebe por parâmetro o número e valor que representa 
múltiplo de. Por exemplo: parâmetros 10 (como x) e 2 (como y) significa os múltiplos de 2 entre 2 
e 10.

b) somar os múltiplos de y entre 1 (se for o caso) e 'x', sendo 'x' o valor até o qual os múltiplos
devem ser somados. Por exemplo: parâmetros 10 (como x) e 2 (como y) significa somar os
múltiplos de 2 entre 2 e 10. Esse valor (30, no caso) deve ser retornado da função.

C) Ler dois valores que representam os limites do intervalo e outro valor que é o "múltiplo de".
Utilizado essas duas funções apresentar a saída da seguinte forma. Nesse exemplo os valores para
os limites são 10 e 13 e o "múltiplo de" é 2.
10 - 2, 4, 6, 8, 10. Soma: 30.
11 - 2, 4, 6, 8, 10. Soma: 30.
12 - 2, 4, 6, 8, 10, 12. Soma: 42.
13 - 2, 4, 6, 8, 10, 12. Soma: 42. */
#include <stdio.h>

void MostraMultiplo(int NumFinal, int Multiplicidade, char tipo);
int SomaNumeros(int NumFinal, int Multiplicidade);

int main(void)
{
    char repetir;
    int x, y;
    int i;
    char opcao;
    int valor1, valor2;
    do
    {
        system("cls");
        printf("A) Mostrar os multiplos de um numero até um valor final determinado\n");
        printf("B) Mostrar os multiplos de um numero + soma até um valor final determinado\n");
        printf("C) Mostrar os multiplos de um intervalo + soma até um valor final determinado\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);
        switch (opcao)
        {
        case 'A':
        case 'a':
        {
            printf("Insira um valor que representa o ultimo valor da sequencia: ");
            scanf("%d", &x);
            printf("Insira um valor que representa a multiplicidade da sequencia: ");
            scanf("%d", &y);
            MostraMultiplo(x, y, 'a');
            printf("\n");
            break;
        }
        case 'b':
        case 'B':
        {
            printf("Insira um valor que representa o ultimo valor da sequencia: ");
            scanf("%d", &x);
            printf("Insira um valor que representa a multiplicidade da sequencia: ");
            scanf("%d", &y);
            MostraMultiplo(x, y, 'b');
            printf("   Soma: %d.", SomaNumeros(x, y));
            printf("\n");
            break;
        }
        case 'c':
        case 'C':
        {
            printf("Insira um valor que representa o limite inferior do intervalo: ");
            scanf("%d", &valor1);
            printf("Insira um segundo valor que representa o limite superior do intervalo: ");
            scanf("%d", &valor2);
            printf("Insira um valor que representa a razao da P.A: ");
            scanf("%d", &y);
            for (i = valor1; i <= valor2; i++)
            {
                printf("%d => ", i);
                MostraMultiplo(i, y, 'c');
                printf("  Soma: %d.\n", SomaNumeros(i, y));
            }
            break;
        }
        }
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

// Funcao que calcula multiplos de um numero ... A)
void MostraMultiplo(int NumFinal, int Multiplicidade, char tipo)
{
    int i;
    if (tipo == 'a' || tipo == 'b')
    {
        printf("%d => ", Multiplicidade);
    }
    for (i = Multiplicidade; i <= NumFinal; i++)
    {
        if (i % Multiplicidade == 0)
        {
            if (i != NumFinal)
            {
                printf("%d, ", i);
            }
            else
            {
                printf("%d.", i);
            }
        }
    }
}

// Funcao que calcula soma dos multiplos de um numero ... B)
int SomaNumeros(int NumFinal, int Multiplicidade)
{
    int i;
    int soma = 0;
    for (i = Multiplicidade; i <= NumFinal; i++)
    {
        if (i % Multiplicidade == 0)
        {
            soma = soma + i;
        }
    }
    return (soma);
}
