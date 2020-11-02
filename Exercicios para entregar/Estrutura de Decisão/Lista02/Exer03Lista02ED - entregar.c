/* 3) Ler um número float. Se a parte decimal é maior ou igual a 0.5 arredondá-lo para o
próximo inteiro, caso contrário truncá-lo. Não é permitido utilizar funções prontas.
Por exemplo:
Informado: 5.45
Mostrar: 5
Informado: 5.987
Mostrar: 6 */
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
        printf("Valor Informado: %.3f\n", numero);
        printf("Mostrar: %.f\n", numero);
    }

    else if (variavel >= 0.5)
    {
        resultado = numero + 0.5;
    }

    else
    {
        resultado = (int)numero;
    }
    printf("Valor Informado: %.3f\n", numero);
    printf("Mostrar: %d\n", resultado);
    system("pause");
    return (0);
}
