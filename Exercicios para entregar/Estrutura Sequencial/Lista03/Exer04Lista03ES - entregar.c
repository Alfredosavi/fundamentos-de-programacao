/* 4) Faça um algoritmo que receba o peso e a altura de uma pessoa e calcule o índice de
massa corporea. Esse índice mede a relação entre peso e altura (peso em quilogramas
dividido pelo quadrado da altura em metros).  */
#include <stdio.h>

int main(void)
{
    float peso;
    float altura;
    float resultado;

    printf("Insira o seu peso em kg: ");
    scanf("%f", &peso);

    printf("Insira a sua altura em metros: ");
    scanf("%f", &altura);

    resultado = peso / (altura * altura);

    printf("Seu indice de massa corporea é de: %.2f\n", resultado);

    system("pause");
    return (0);
}
