/* 3) Fazer uma função que converte de reais para dólares ou de dólares para reais. 
Essa função recebe como parâmetros: o valor a ser convertido, o valor da cotação, 
e se é para converter em dólares ou em reais.
A função faz a conversão e retorna o valor convertido.
Sugestão de cabeçalho da função:
float ConverterModeadas( float Valor, float Cotacao, char Tipo) //Tipo 'D' ou 'd' significa 
que a conversão é de real para dólar e 'R' ou 'r' significa que a conversão é de dólar para 
real.
Usando essa função:
a) Ler um determinado valor, o valor da cotação e o tipo de convers�o e apresentar o valor 
obtido.
b) Ler os valores que representam os limites de um intervalo, o valor da cotação e o tipo de 
conversão e apresentar a tabela de conversão resultante. Por exemplo:
Dólares	Reais
10		20,00
11		22,00
12		24,00
13		26,00
C) Usar essa função para cálcular a seguinte fórmula:
ValorReais = 12,34 + (3 * Valor1) / 45;
Sendo que Valor1 corresponde ao valor de 15 dólares com uma cotação de 2,055 reais por dólar. */
#include <stdio.h>

float converterMoeda(float valor, float cotacao);

int main(void)
{
    char repetir;
    char opcao;
    char opcaosec;
    float cotacao, valor1;
    float valor2;
    int i;

    do
    {
        system("cls");
        printf("Conversao de Moedas\n");
        printf("1 - Converter (Dolar/Reais)\n");
        printf("2 - Converter (Dolar/Reais) em um intervalo\n");
        printf("3 - Calcular uma funcao pronta\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);
        switch (opcao)
        {
        case '1':
        {
            printf("\n");
            printf("A - Converter reais para dolar\n");
            printf("B - Converter dolar para reais\n");
            printf("Opcao: ");
            fflush(stdin);
            scanf("%c", &opcao);
            switch (opcao)
            {
            case 'a':
            case 'A':
            {
                printf("Informe o valor em reais para a conversão R$: ");
                scanf("%f", &valor1);
                printf("Informe a cotacao do dolar US$: ");
                scanf("%f", &cotacao);
                printf("\n");
                printf("R$: %.2f equivale a US$: %.2f dolares!!!\n", valor1, converterMoeda(valor1, cotacao));
                break;
            }
            case 'b':
            case 'B':
            {
                printf("Informe o valor em dolares para a conversão US$: ");
                scanf("%f", &valor1);
                printf("Informe a cotacao do real R$: ");
                scanf("%f", &cotacao);
                printf("\n");
                printf("US$: %.2f equivale a R$: %.2f reais!!!\n", valor1, converterMoeda(valor1, cotacao));
                break;
            }
            }
            break;
        }
        case '2':
        {
            printf("\n");
            printf("A - Converter reais para dolar\n");
            printf("B - Converter dolar para reais\n");
            printf("Opcao: ");
            fflush(stdin);
            scanf("%c", &opcao);
            switch (opcao)
            {
            case 'a':
            case 'A':
            {
                printf("\n");
                printf("Informe um valor para seu intervalo: ");
                scanf("%f", &valor1);
                printf("Informe um segundo valor para seu intervalo: ");
                scanf("%f", &valor2);
                printf("Informe a cotacao do dolar US$: ");
                scanf("%f", &cotacao);
                printf("\n");
                printf("Reais      Dolares\n");
                for (i = valor1; i <= valor2; i++)
                {
                    printf(" %2d         %.2f\n", i, converterMoeda(i, cotacao));
                }
                printf("\n");
                break;
            }
            case 'b':
            case 'B':
            {
                printf("\n");
                printf("Informe um valor para seu intervalo: ");
                scanf("%f", &valor1);
                printf("Informe um segundo valor para seu intervalo: ");
                scanf("%f", &valor2);
                printf("Informe a cotacao do real R$: ");
                scanf("%f", &cotacao);
                printf("\n");
                printf("Dolares      Reais\n");
                for (i = valor1; i <= valor2; i++)
                {
                    printf(" %2d          %.2f\n", i, converterMoeda(i, cotacao));
                }
                printf("\n");
                break;
            }
            }
            break;
        }
        case '3':
        {
            valor2 = converterMoeda(15, 2.055);
            cotacao = 12.34 + (3 * valor2) / 45;
            printf("Valor Reais %.2f\n", cotacao);
            printf("\n");
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

float converterMoeda(float valor, float cotacao)
{
    float resultado;
    resultado = valor * cotacao;
    return (resultado);
}
