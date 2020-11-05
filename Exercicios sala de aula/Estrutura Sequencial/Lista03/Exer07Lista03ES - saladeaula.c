/* 7) Ler um número inteiro longo (long int) que representa segundos e converté-lo para horas,
minutos e segundos. Mostrar a quantidade de horas, minutos e segundos obtidos, no
seguinte formato: xhoras:yminutos:zsegundos.
Exemplo:
informado o valor 3725
apresentar
1hora:2minutos:5segundos
Observação:
declarar uma variável inteiro longo
long int Num; */
#include <stdio.h>

int main(void)
{
    long int Num;
    int horas;
    int minutos;
    int segundos;

    printf("Insira o inteiro longo (long int): ");
    scanf("%d", &Num);

    horas = Num / 3600;
    minutos = Num % 3600 / 60;
    segundos = Num % 3600 % 60;

    printf("%.d segundos contem %.dhora(s):%.dminuto(s):%.dsegundo(s)\n", Num, horas, minutos, segundos);

    system("pause");
    return (0);
}
