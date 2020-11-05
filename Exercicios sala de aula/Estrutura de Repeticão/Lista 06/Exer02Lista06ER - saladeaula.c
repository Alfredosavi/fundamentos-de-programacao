/*2) Ler dois números positivos que representam os limites inferior e superior de um intervalo.
Validar a entrada para que sejam informados números positivos. É mais adequado validá-los 
separadamente.
Fazer a média dos múltiplos de 3 e de 5 desse intervalo. Verificar para que no cálculo da 
média não seja feita divisão por zero. */
#include <stdio.h>

int main(void)
{
    char repetir;
    int numero1;
    int numero2;
    int soma;
    int i;
    int contador;
    float media;

    do
    {
        numero1 = -5, numero2 = -5;
        while (numero1 < 0)
        {
            printf("Informe um numero positivo que representa o limite inferior do intervalo: ");
            scanf("%d", &numero1);
        }
        while (numero2 < 0)
        {
            printf("Informe um numero positivo que representa o limite superior do intervalo: ");
            scanf("%d", &numero2);
        }

        soma = 0;
        contador = 0;
        for (i = numero1; i <= numero2; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                soma++;
                contador++;
            }
        }

        if (contador == 0)
        {
            printf("Nao foi possivel fazer a media !!!\n");
        }
        else
        {
            media = (float)soma / contador;
            printf("A media dos multiplos de 3 e de 5 do intervalo é = %.2f\n", media);
        }

        printf("Deseja repetir ??? (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
