/* 1) Implementar uma função para calcular o fatorial de um número. Essa função recebe um número
por parâmetro e retorna o seu fatorial. Implementar outra função para apresentar os multiplicadores
no cálculo do fatorial. Utilizando essas duas funções apresentar o fatorial de 1 até um número
informado pelo usuário. Esse valor deve estar entre um e 12. Validar a entrada. A saída deve ser
como apresentado na Figura a seguir. Observar que não há o caractere que representa multiplicação
após o número 1.*/
#include <stdio.h>

int Fatorial(int num);
void mostraFatorial(int num);

int main(void)
{
    int valor;
    int valor2;
    char repetir;
    char opcao;
    int i;

    do
    {
        system("cls");
        printf("1 - Fatorial de um numero\n");
        printf("2 - Fatorial de um intervalo\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch (opcao)
        {
        case '1':
        {
            printf("Insira um numero para calcular seu fatorial: ");
            scanf("%d", &valor);

            printf("%d => ", valor);
            mostraFatorial(valor);
            printf(" = %d \n", Fatorial(valor));
            break;
        }
        case '2':
        {
            printf("Insira um numero inferior para o intervalo: ");
            scanf("%d", &valor);

            printf("Insira um numero superior para o intervalo: ");
            scanf("%d", &valor2);
            for (i = valor; i <= valor2; i++)
            {
                printf("%d => ", i);
                mostraFatorial(i);
                printf(" = %d.", Fatorial(i));
                printf("\n");
            }
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
    } while (repetir == 's' || repetir == 'S');

    return 0;
}

int Fatorial(int num)
{
    int resultado = 1;
    int i;
    for (i = num; i >= 2; i--)
    {
        resultado = resultado * i;
    }
    return (resultado);
}

void mostraFatorial(int num)
{
    int Fat = 1;
    int i;
    for (i = num; i >= 2; i--)
    {
        printf("%d * ", i);
    }
    printf("1");
}
