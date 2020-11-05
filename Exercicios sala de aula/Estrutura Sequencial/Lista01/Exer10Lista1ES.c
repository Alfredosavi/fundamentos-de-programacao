/*10) Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo
usuário. Calcule e mostre o resultado de cada expressão.
Atenção para os resultados que podem ser valores float e para a prioridade dos
operadores.
Primeiro linearizar as expressões depois implementar o algoritmo para calcular o
resultado. */
#include <stdio.h>

int main(void)
{
    float X;
    float Y;
    float resultado;

    printf("Informe o valor de X: ");
    scanf("%f", &X);

    printf("Informe o valor de Y: ");
    scanf("%f", &Y);

    resultado = ((X + Y / Y) * (X * X));
    printf("O resultado da operacao A é: %.f\n", resultado);

    resultado = ((X + Y) / (X - Y));
    printf("O resultado da operacao B é: %.f\n", resultado);

    resultado = ((X * X) + (Y * Y * Y) / 2);
    printf("O resultado da operacao C é: %.f\n", resultado);

    resultado = (X * X * X) / (X * X);
    printf("O resultado da operacao D é: %.f\n", resultado);

    resultado = (int)X % (int)Y;
    printf("O resto da divisão de x por y é de: %.f\n", resultado);

    resultado = (int)X % 3;
    printf("O resto da divisão de x por 3 é de: %.f\n", resultado);

    resultado = (int)Y % 3;
    printf("O resto da divisão de y por 3 é de: %.f\n", resultado);

    return 0;
}
