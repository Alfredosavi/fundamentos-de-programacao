/* 1) Fazer uma função para calcular o quadrado de um número. Usar essa função para 
(usar obrigatoriamente a mesma função):
a) Mostrar o quadrado de um número informado pelo usuário.
b) Apresentar o quadrado entre dois valores (limites de um intervalo) informado pelo usuário 
na seguinte forma (os limites são 5 e 8):
5 ^ 2 = 25
6 ^ 2 = 36
7 ^ 2 = 49
8 ^ 2 = 64 */
#include <stdio.h>

int quadrado(int numero);

int main(void)
{
    int opcao;
    int valor1;
    int valor2;
    char repetir;
    int i;

    do
    {
        system("cls");
        printf("Calcular o quadrado\n");
        printf("1 - Calcular quadrado de um numero\n");
        printf("2 - Calcular quadrado entre um intervalo\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);
        switch (opcao)
        {
        case '1':
        {
            printf("Informe um numero para obter seu quadrado: ");
            scanf("%d", &valor1);
            printf("%d ^ 2 = %d\n", valor1, quadrado(valor1));
            break;
        }
        case '2':
        {
            printf("\n");
            do
            {
                printf("Informe um numero inferior para seu intervalo: ");
                scanf("%d", &valor1);
            } while (valor1 > 8 || valor1 < 5);
            do
            {
                printf("Informe um segundo numero para seu intervalo: ");
                scanf("%d", &valor2);
            } while (valor2 < valor1 || valor2 > 8);
            for (i = valor1; i <= valor2; i++)
            {
                printf("%d ^ 2 = %d\n", i, quadrado(i));
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
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

int quadrado(int numero)
{
    int resultado;
    resultado = numero * numero;
    return (resultado);
}
