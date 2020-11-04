/* 1) Fazer uma calculadora com as operações de soma, subtração, multiplicação, divisão e resto.
Cada operação é uma função e deve ser acessada a partir de um menu. As funções são implementadas 
na próprio programa:
a) Soma sem parâmetros e sem retorno
b) Subtração com parâmetros e sem retorno
c) Multiplicação sem parâmetros e com retorno
d) Divisão com parâmetros e com retorno.
e) Resto com parâmetros e com retorno. */
#include <stdio.h>

void somar(void);
void subtrair(int num1, int num2);
int multiplicar(void);
float dividir(int num1, int num2);
int resto(int num1, int num2);

int main(void)
{
    char continuar;
    char opcao;
    int valor1, valor2;
    int retornoInt;
    float retornoFloat;

    do
    {
        system("cls");
        printf("Calculadora basica\n");
        printf("A - adicao\n");
        printf("S - subtracao\n");
        printf("M - multiplicacao\n");
        printf("D - divisao\n");
        printf("R - resto\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch (opcao)
        {
        case 'A':
        case 'a':
        {
            somar();
            break;
        }
        case 'S':
        case 's':
        {
            //void subtrair(int num1, int num2)
            printf("Informe o primeiro valor: ");
            scanf("%d", &valor1);
            printf("Informe o segundo valor: ");
            scanf("%d", &valor2);
            subtrair(valor1, valor2);
            break;
        }
        case 'M':
        case 'm':
        {
            retornoInt = multiplicar();
            printf("Multiplicacao: %d\n", retornoInt);
            break;
        }
        case 'D':
        case 'd':
        {
            //float dividir(int num1, int num2)
            printf("Informe o primeiro valor: ");
            scanf("%d", &valor1);
            printf("Informe o segundo valor: ");
            scanf("%d", &valor2);
            if (valor2 != 0)
            {
                retornoFloat = dividir(valor1, valor2);
                printf("Divisao: %f\n", retornoFloat);
            }
            else
            {
                printf("Impossivel realizar divisao por zero\n");
            }
            break;
        }
        case 'R':
        case 'r':
        {
            //int resto(int num1, int num2)
            printf("Informe o primeiro valor: ");
            scanf("%d", &valor1);
            printf("Informe o segundo valor: ");
            scanf("%d", &valor2);
            if (valor2 != 0)
            {
                retornoInt = resto(valor1, valor2);
                printf("resto: %d\n", retornoInt);
            }
            else
            {
                printf("Impossivel realizar divisao por zero\n");
            }
            break;
        }
        default:
        {
            printf("Opcao Invalida\n");
        }
        }
        printf("\nExecutar novamente (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    return (0);
}

// funcao para somar, sem parametros e sem retorno.
void somar(void)
{
    int num1, num2, soma;
    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("soma: %d\n", soma);
}

// funcao para subtrair, com parametros e sem retorno.
void subtrair(int num1, int num2)
{
    int subtracao;
    subtracao = num1 - num2;
    printf("Subtracao: %d\n", subtracao);
}

// funcao para multiplicar, sem parametros e com retorno.
int multiplicar(void)
{
    int num1, num2, multiplicacao;
    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);
    multiplicacao = num1 * num2;
    return (multiplicacao); //retorna o valor que esta em multiplicacao.
}

//funcao para dividir, com parametro e com retorno
float dividir(int num1, int num2)
{
    float divisao;
    divisao = (float)num1 / num2;
    return (divisao); // return(num1/num2);
}

//funcao para obter o resto da divisao de dois valores
int resto(int num1, int num2)
{
    int resto;
    resto = num1 - (num1 / num2) * num2;
    return (resto);
}
