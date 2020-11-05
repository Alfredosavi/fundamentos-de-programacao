/* 4) Fazer um programa que leia um número de até três dísgitos (considere que será fornecido
um número de até 3 dígitos), calcule e imprima a soma dos seus dígitos. Exemplo: 123 = 1
+ 2 + 3 = 6. */
#include <stdio.h>

int main(void)
{
    int numero;
    int unidade;
    int dezena;
    int centena;
    int soma;

    printf("Informe o numero de ate tres digitos: ");
    scanf("%d", &numero);

    unidade = numero / 100;
    printf("Unidade: %.d\n", unidade);

    dezena = (numero - (unidade * 100)) / 10;
    printf("Dezena: %d\n", dezena);

    centena = numero - (unidade * 100 + dezena * 10);
    printf("Centena: %.d\n", centena);

    soma = unidade + centena + dezena;
    printf("%d + %d + %d = %d\n", unidade, dezena, centena, soma);

    system("pause");
    return (0);
}
