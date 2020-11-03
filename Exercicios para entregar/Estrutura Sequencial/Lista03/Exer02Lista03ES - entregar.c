/* 2) Elabore um algoritmo que leia do teclado uma quantidade de segundos e transforme
este tempo em dias, horas e minutos. */
#include <stdio.h>

int main(void)
{
    int numerosegundos;
    int dias;
    int horas;
    int minutos;

    printf("Insira uma quantidade de segundos: ");
    scanf("%d", &numerosegundos);

    dias = numerosegundos / 86400;
    numerosegundos = numerosegundos % 86400;

    horas = numerosegundos / 3600;
    numerosegundos = numerosegundos % 3600;

    minutos = numerosegundos / 60;
    numerosegundos = numerosegundos % 60;

    printf("%.2d segundos correspondem:\n %.2d dias\n%.2d horas\n%.2d minutos.\n", numerosegundos, dias, horas, minutos);

    system("pause");
    return (0);
}
