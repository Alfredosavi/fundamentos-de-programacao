/* 1) Utilizando a função fatorial.
a) Calcule o número de arranjos possíveis de n elementos p a p. A fórmula para arranjo é a 
seguinte:
Cite algumas utilidades dessa fórmula
b) Calcule o número de combinações possíveis de n elementos p a p. */
#include <stdio.h>

int Fatorial(int num);
int Arranjos(int n, int p);
int combinacao(int n, int p);

int main(void)
{
    char repetir;
    char opcao;
    int n, p;

    do
    {
        system("cls");
        printf("1 - Calcular o arranjo de um numero\n");
        printf("2 - Calcular o numero de combinacoes\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch (opcao)
        {
        case '1':
        {
            printf("Insira um numero N para seu arranjo: ");
            scanf("%d", &n);

            printf("Insira um numero P para seu arranjo: ");
            scanf("%d", &p);

            printf("O resultado do arranjo é de: %d", Arranjos(n, p));
            break;
        }

        case '2':
        {
            printf("Insira um numero N para sua combinacao: ");
            scanf("%d", &n);

            printf("Insira um numero P para sua combinacao: ");
            scanf("%d", &p);

            printf("O resultado da combinacao é de: %d\n", combinacao(n, p));
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

int Fatorial(int num)
{
    int Fatorial = 1;
    int i;
    for (i = num; i >= 2; i--)
    {
        Fatorial = Fatorial * i;
    }
    return (Fatorial);
}

int Arranjos(int n, int p)
{
    int resultado;
    resultado = (Fatorial(n) / Fatorial(n - p));
    return (resultado);
}

int combinacao(int n, int p)
{
    int resultado;
    resultado = (Fatorial(n) / (Fatorial(p) * (Fatorial(n - p))));
    return (resultado);
}
