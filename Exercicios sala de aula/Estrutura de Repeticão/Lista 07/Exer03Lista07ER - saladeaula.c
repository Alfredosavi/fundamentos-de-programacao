/* 3) Ler um número N qualquer maior ou igual a 1 e menor ou igual a 50 e apresentar o valor obtido 
da multiplicação sucessiva de N por 2, enquanto o produto for menor que 250 
(N*2; N*2*2; N*2*2*2; etc.). O valor N deverá ser verificado quanto a sua validade.
Caso o usuário informe um valor fora da faixa, o programa deverá informar que o valor digitado 
não é válido e repetir a leitura.
Atenção: o produto deve ser menor que 250. */
#include <stdio.h>

int main(void)
{
    char repetir;
    int qtde;
    int valor;
    do
    {
        qtde = 0;
        do
        {
            printf("Informe um numero N entre 1 e 50: ");
            scanf("%d", &valor);
        } while (valor < 1 || valor > 50);

        while ((valor * 2) < 250)
        {
            valor = valor * 2;
            printf("%d\n", valor);
        }
        printf("\nExecutar novamente (S/s para sim):");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
