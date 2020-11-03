/* 5) Ler um número com até 4 dígitos. Separar os dígitos desse número e mostrá-los em
linhas distintas.
Por exemplo:
Lido o número: 1234
Mostrar da seguinte forma:
1 é o primeiro dígito.
2 é o segundo dígito.
3 é o terceiro dígito.
4 é o quarto dígito. */
#include <stdio.h>

int main(void)
{
    int numero;
    int U, D, C, M;

    printf("Insira um numero inteiro de até 4 digitos: ");
    scanf("%d", &numero);

    U = numero / 1000;
    D = numero % 1000 / 100;
    C = numero % 1000 % 100 / 10;
    M = numero % 1000 % 100 % 10;

    printf("%d é o primeiro digito\n", U);
    printf("%d é o segundo digito\n", D);
    printf("%d é o terceiro digito\n", C);
    printf("%d é o quarto digito\n", M);

    system("pause");
    return (0);
}
