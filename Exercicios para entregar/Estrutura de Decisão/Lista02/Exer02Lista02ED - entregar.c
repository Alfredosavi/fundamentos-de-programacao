/* 2) Ler um número float, se o mesmo possui parte decimal arredondá-lo para o próximo
inteiro. Não é permitido utilizar funções prontas.
Por exemplo:
Informado: 5.005
Mostrar: 6
Informado: 5.00
Mostrar: 5 */
#include <stdio.h>

int main(void)
{
    float numero;
    int resultado;
    float variavel;

    printf("Insira o numero: ");
    scanf("%f", &numero);

    resultado = (int)numero;
    variavel = numero - resultado;

    if (variavel == 0)
    {
        printf("Informado: %.f\n", numero);
        printf("Mostrar: %d\n", resultado);
    }

    else
    {
        resultado = numero + 0.999999;
        printf("Informado: %.3f\n", numero);
        printf("Mostrar: %d\n", resultado);
    }

    system("pause");
    return (0);
}
