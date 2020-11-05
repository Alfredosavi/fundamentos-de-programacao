/* 1) Elaborar um programa para ler valores inteiros (incluindo valores positivos e negativos) até
que o valor zero seja informado. O valor zero não deverá ser considerado. Informar o maior e
o menor entre os valores positivos lidos e apresentar a média dos valores negativos
informados.
Obs.: verificar que não sejam realizadas divisões por zero. */
#include <stdio.h>

int main(void)
{
    char repetir;
    int numero = 1;
    int maior, menor;
    float media;
    int qtdenegativo;
    char entrada;
    int soma;

    do
    {
        system("cls");
        entrada = 's';
        qtdenegativo = 0;
        soma = 0;
        do
        {
            printf("Insira um numero (saida = 0): ");
            scanf("%d", &numero);
            if (numero > 0)
            {
                if (entrada == 's')
                {
                    maior = numero;
                    menor = numero;
                    entrada = 'r';
                }
                else
                {
                    if (numero > maior)
                    {
                        maior = numero;
                    }
                    else if (numero < menor)
                    {
                        menor = numero;
                    }
                }
            }
            else if (numero < 0)
            {
                numero = numero * (-1);
                soma = soma + numero;
                qtdenegativo++;
            }

        } while (numero != 0);
        printf("Maior => %d\nMenor => %d\n", maior, menor);
        if (qtdenegativo != 0)
        {
            media = (float)soma / qtdenegativo;
            printf("Media dos numero negativos é de: %.2f\n", media);
        }
        else
        {
            printf("Impossivel calcular media !!!\n");
        }
        printf("Deseja repetir o programa(S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
