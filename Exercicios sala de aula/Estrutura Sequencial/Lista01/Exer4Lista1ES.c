/* 4) Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e
mostrar (reutilizando variáveis):
a) A soma desses números;
a) A subtração do primeiro pelo segundo;
c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;
e) A divisão float do primeiro pelo segundo;
e) O resto da divisão do primeiro pelo segundo.
O que é o resto da divisão? Por que o operador de resto somente pode ser utilizado com
operandos inteiros? */
#include <stdio.h>

int main(void)
{
    int valor_1;
    int valor_2;
    int resp1;
    float resp2;

    printf("Insira o 1 valor inteiro: ");
    scanf("%d", &valor_1);

    printf("Insira o 2 valor inteiro: ");
    scanf("%d", &valor_2);

    resp1 = valor_1 + valor_2;
    printf("%d + %d = %d\n", valor_1, valor_2, resp1);

    resp1 = valor_1 - valor_2;
    printf("%d - %d = %d\n", valor_1, valor_2, resp1);

    resp1 = valor_1 * valor_2;
    printf("%d * %d = %d\n", valor_1, valor_2, resp1);

    resp1 = valor_1 / valor_2;
    printf("%d / %d = %d\n", valor_1, valor_2, resp1);

    resp2 = (float)valor_1 / valor_2;
    printf("%d / %d = %.2f\n", valor_1, valor_2, resp2);

    resp1 = valor_1 % valor_2;
    printf("%d %% %d = %d\n", valor_1, valor_2, resp1);

    system("pause");
    return 0;
}
