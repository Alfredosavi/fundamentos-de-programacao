/* 3) Cada degrau de uma escada tem uma altura X. Faça um algoritmo para ler essa altura e
a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus
o usuário deverá subir para atingir seu objetivo.  */
#include <stdio.h>

int main(void)
{
    float altura;
    int degraus;
    float alturaescada;

    printf("Informe a altura que deseja alcançar subindo a escada em metros: ");
    scanf("%f", &altura);

    printf("Informe a altura que deseja para cada degrau de escada em metros: ");
    scanf("%f", &alturaescada);

    degraus = (altura / alturaescada) + 0.999999;

    printf("Voce deverá subir %.2d degraus para atingir seu objetivo de %.2f metros de altura\n", degraus, altura);

    system("pause");
    return (0);
}
