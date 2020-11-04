/* 9) Ler um número que indica a quantidade de ímpares e divisiveis por 5 iniciando um que deve ser 
mostrada.
O valor informado para a quantidade deve ser positivo. Validar a entrada. */
#include <stdio.h>

int main(void)
{
    int aux = 1; // variavel a ser testada se atende as condições
    int qtdeMostrados = 0;
    int qtdeMostrar;

    do // validar a entrada. Queremos um valor postivo
    {
        printf("Informe um valor positivo: ");
        scanf("%d", &qtdeMostrar);
    } while (qtdeMostrar <= 0);

    do
    {
        if (aux % 2 != 0 && aux % 5 == 0)
        {
            printf("%d\t", aux);
            qtdeMostrados++;
            if (qtdeMostrados % 7 == 0) //mostrar 7 colunas
            {
                printf("\n");
            }
        }
        aux++;
    } while (qtdeMostrados < qtdeMostrar);

    return 0;
}
