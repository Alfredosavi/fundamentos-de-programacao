/* 5) Ler um número e imprimir todos os pares entre 2 e o número lido.
Imprimir a soma dos pares, o produto dos ímpares e divisíveis por 9 e a média de todos os números 
do intervalo.
Validar para que não seja realizada divisão por zero. */
#include <stdio.h>

int main(void)
{
    int limite;
    int i;
    int somaPares = 0;
    int qtde = 0;
    float media;
    int produto = 1;
    int somaTodos = 0;

    printf("Insira o valor inteiro: ");
    scanf("%d", &limite);

    printf("\nPares\n");
    for (i = 2; i <= limite; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
            somaPares = somaPares + i; // acumular os pares
        }
        else if (i % 9 == 0) //else if(i % 2 != 0 && i % 9 == 0)
        {
            produto = produto * i;
        }
        somaTodos = somaTodos + i;
        qtde++; //qtde = qtde + 1
    }

    if (qtde > 0)
    {
        media = (float)somaTodos / qtde;
        printf("\nMedia dos valores do intervalo: %.2f\n", media);
    }
    printf("Soma dos valores pares do intervalo: %d\n", somaPares);

    if (produto != 1)
    {
        printf("Produtos dos valores impares do intervalo: %d\n", produto);
    }

    return 0;
}
