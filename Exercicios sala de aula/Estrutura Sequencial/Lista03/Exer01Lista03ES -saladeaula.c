/* 1) Ler um número float. Separar a parte inteira e a parte decimal desse número. Apresentar
a parte decimal como um valor float e como um inteiro de três dígitos. Da parte inteira
separar o número representa unidade, dezena e centena e mostrar. Exemplo:
Informado o valor 123.456
Mostrar:
Parte inteira: 123
Parte decimal: 0.456
Parte decimal como inteiro de três dígitos: 456
Unidade: 1
Dezena: 2
Centena: 3 */
#include <stdio.h>

int main(void)
{
    float numero;
    int resultado;
    float variavel;
    float unidade;
    float dezena;
    float centena;
    float buffer;

    printf("Insira o numero float: ");
    scanf("%f", &numero);

    resultado = numero;
    printf("Parte inteira: %d\n", resultado);

    variavel = numero - resultado;
    printf("Parte decimal: %.3f\n", variavel);

    variavel = (numero - resultado) * 1000;
    printf("Parte decimal como inteiro de tres digitos: %.f\n", variavel);

    unidade = (int)numero / 100;
    printf("Unidade: %.f\n", unidade);

    dezena = numero - (unidade * 100);
    buffer = (int)dezena / 10;
    printf("Dezena: %.f\n", buffer);

    centena = numero - (unidade * 100 + buffer * 10);
    printf("Centena: %.f\n", centena);

    system("pause");
    return (0);
}
