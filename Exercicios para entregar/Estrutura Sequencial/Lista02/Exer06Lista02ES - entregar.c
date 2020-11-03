/*6) O código a seguir tem como objetivos:
a) fazer a divisão float entre dois valores inteiros informados pelo usuário;
b) Obter o resto da divisão do primeiro número pelo segundo número;
Faça os ajustes necessários para que os objetivos sejam alcançados. */
#include <stdio.h>

int main(void)
{
     int Num1;
     int Num2;
     float Divisao;
     int Resto;

     printf("Informe o primeiro valor: ");
     scanf("%d", &Num1);

     printf("Informe o segundo valor: ");
     scanf("%d", &Num2);

     Divisao = (Num1 / Num2);
     Resto = Num1 % Num2;

     printf("A divisão de %d por %d é %.f\n", Num1, Num2, Divisao);
     printf("O resto da divisão é %d\n", Resto);

     system("pause");
     return (0);
}
