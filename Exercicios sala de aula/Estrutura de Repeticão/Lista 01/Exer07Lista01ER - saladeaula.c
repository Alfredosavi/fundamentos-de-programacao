/* /*7) Ler uma série de números indicados pelo usuário até ser informado o valor zero.
Encontrar e mostrar o maior e o menor dos valores informados pelo usuário.
O valor 0 indica o final da leitura e não deve ser considerado. */
#include <stdio.h>

int main(void)
{
    int num = 1;
    int maior, menor;
    char controle = 'n';

    while (num != 0)
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &num);

        if (num != 0)
        {
            if (controle == 'n') // 1 valor lido para comparar com os demais.
            {
                maior = menor = num;
                controle = 's';
            }
            else
            {
                if (num > maior)
                {
                    maior = num;
                }
                else if (num < menor)
                {
                    menor = num;
                }
            }
        }
    }

    if (controle == 's')
    {
        printf("Numero Maior = %d\n", maior);
        printf("Numero menor = %d\n", menor);
    }

    system("pause");
    return (0);
}
