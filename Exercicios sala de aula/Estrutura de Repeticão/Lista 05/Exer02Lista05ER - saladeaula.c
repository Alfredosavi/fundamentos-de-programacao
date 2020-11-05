/* 2) Elaborar um programa que efetue a leitura de valores positivos inteiros até que um valor 
negativo seja informado.
Ao final devem ser apresentados o maior e o menor valor informados pelo usuário.
O valor negativo, a condição de saída, não deve ser considerado nas comparações para localizar 
o maior e o menor. */
#include <stdio.h>

int main(void)
{
    int valor = 0;
    int maior, menor;
    int controle = 10;

    do
    {
        printf("Insira um valor (saida numero < 0): ");
        scanf("%d", &valor);
        if (valor >= 0)
        {
            if (controle == 10)
            {
                maior = valor;
                menor = valor;
                controle = 5;
            }
            else
            {
                if (valor > maior)
                {
                    maior = valor;
                }
                else if (valor < menor)
                {
                    menor = valor;
                }
            }
        }
    } while (valor > 0);
    printf("Maior = %d e Menor = %d\n", maior, menor);

    system("pause");
    return (0);
}
