/* 1) Uma árvore A tem 1,50 metros e cresce 2 centímetros por ano, enquanto uma árvore
B tem 1,10 metros e cresce 3 centímetros por ano. Construa um algoritmo que calcule e
imprima quantos anos serão necessários para que B seja maior que A. */
#include <stdio.h>

int main(void)
{
    int ano = 0;
    float A = 1.50;
    float B = 1.10;

    do
    {
        A = A + 0.02;
        B = B + 0.03;
        ano++;
    } while (B < A);
    printf("Serao necessarios %d anos para B ser maior que A;", ano);

    return 0;
}
