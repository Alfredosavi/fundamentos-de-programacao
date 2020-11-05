#include <stdio.h>

int main(void)
{
    float salarioatual;
    float reajuste;
    float salarioreajustado;

    printf("Informe o seu salario atual: ");
    scanf("%f", &salarioatual);

    printf("Informe o reajuste (2 para 2%%): ");
    scanf("%f", &reajuste);

    salarioreajustado = salarioatual + ((reajuste * salarioatual) / 100);
    printf("Seu salario reajustado é de R$: %.2f\n", salarioreajustado);

    system("pause");
    return 0;
}
