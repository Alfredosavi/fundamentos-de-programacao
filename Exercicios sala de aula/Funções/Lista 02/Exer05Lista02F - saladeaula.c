/* Exercício 5 em um programa principal
5) Fazer uma função que mostre os divisores de um número. Essa função recebe como parâmetro o 
número e mostra os divisores de 1 até o número passado como parâmetro da função.
a) Usar essa função para mostrar os divisores de valores informados pelo usuário. 
Validar para que seja uma entrada positiva.
b) Usar essa função para mostrar os divisores de cada número de um intervalo com os limites 
informados pelo usuário. E a função do exercício anterior para apresentar a quantidade de divisores.
Apresentar primeiro os divisores e em seguida (no final da respectiva linha) a quantidade de divisores.
Exemplo:
intervalo entre 5 e 7
5 => 1	5.          Total de divisores: 2
6 => 1	2	3	6.  Total de divisores: 4
7 => 1	7.          Total de divisores: 2 */
#include <stdio.h>

void MostraDivisores(int valor);

int main(void)
{
    char repetir;
    int valor1;
    int valor2;
    char opcao;
    int aux;

    do
    {
        system("cls");
        printf("1 - Mostrar os divisores de valores informados\n");
        printf("2 - Mostrar os divisores de cada numero de um intervalo com limites informados\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch (opcao)
        {
        case '1':
        {
            do
            {
                printf("Informe um numero positivo: ");
                scanf("%d", &valor1);
            } while (valor1 < 0);
            MostraDivisores(valor1);
            break;
        }
        case '2':
        {
            printf("Informe um numero positivo para o limite inferior do seu intervalo: ");
            scanf("%d", &valor1);
            aux = valor1;
            printf("Informe um segundo numero positivo para o limite superior do seu intervalo: ");
            scanf("%d", &valor2);
            do
            {
                MostraDivisores(aux);
                aux++;
            } while (aux <= valor2);
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

void MostraDivisores(int valor)
{
    int i;
    int qtde = 2;

    printf("%d =>  1, ", valor);
    for (i = 2; i <= valor / 2; i++)
    {
        if (valor % i == 0)
        {
            qtde++;
            printf("%d, ", i);
        }
    }
    printf(" %d. Total de divisores => %d\n", valor, qtde);
}
