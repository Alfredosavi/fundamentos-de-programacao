/* 5) Fazer uma função que recebe um número float e retorna esse número arredondado para o próximo
inteiro. Atenção se o parâmetro passado é um valor sem a parte decimal o valor não deve ser
acrescido de um. Não é permitido usar a função ceil para fazer o arredondamento.
Fazer um menu de opções para (resolver utilizando a função implementada)
a) Arredondar valores informados pelo usuário. Parar a leitura quando informado valor zero ou
negativo.
Exemplo:
parâmetro retorno
1.34 2
2.00 2
2.000001 3
1.999999 2
1.000001 2
b) Ler dois valores float que representam os limites de um intervalo. Os valores deve ser positivos,
validar a entrada. Percorrer o intervalo e apresentar o valor arredondado.
Exemplo:
limites 12.35 e 15.14
Apresentar:
12.35 13
13.15 14
14.35 15*/
#include <stdio.h>

int ArredondaProximoInteiro(float valor);

int main(void)
{
    char repetir;
    float valor;
    float valor2;
    char opcao;
    float i;

    do
    {
        system("cls");
        printf("1 - Arredondar valores !!! Parar leitura quando informado valor 0 ou -\n\n");
        printf("2 - Ler dois valores float que representa um intervalo e arredonda-los\n\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch (opcao)
        {
        case '1':
        {
            do
            {
                printf("Insira um valor para arredondar: ");
                scanf("%f", &valor);
                if (valor > 0)
                {
                    printf("%.6f ==> %d", valor, ArredondaProximoInteiro(valor));
                    printf("\n");
                }
            } while (valor > 0);
            break;
        }

        case '2':
        {
            do
            {
                printf("Insira um valor float inferior para seu intervalo (Positivo): ");
                scanf("%f", &valor);
            } while (valor < 0);

            do
            {
                printf("Insira um valor float superior para seu intervalo (Positivo): ");
                scanf("%f", &valor2);
            } while (valor2 < 0);

            for (i = valor; i <= valor2; i++)
            {
                printf("%.6f ==> %d\n", i, ArredondaProximoInteiro(i));
            }
        }
        }
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

int ArredondaProximoInteiro(float valor)
{
    float resultado;
    resultado = valor * 1000000;
    float valorarredondado;
    int retorno;
    if (resultado != 0)
    {
        valorarredondado = valor + 0.999999;
        retorno = valorarredondado;
    }
    else
    {
        valorarredondado = valor;
        retorno = valor;
    }
    return (retorno);
}
