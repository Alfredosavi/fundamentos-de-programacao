/* 3) O código a seguir tem o objetivo de obter o resto da divisão do número maior pelo
menor informados (independentemente da ordem informada) e informar que não é
possível realizar a divisão caso o divisor seja zero. Faça os ajustes necessários para 
que esses objetivos sejam alcançados.
# include <stdio>
int main(void)
{
 float Num1;
 int Num2;
 int Resto;
 printf("Informe o primeiro valor: ");
 scanf("%d",Num1);
 printf("Informe o segundo valor: ")
 scanf("%d",Num2);

 if(Num1 > Num2)
 {
 Resto = Num1 % Num2;
 }
 else
 {
 Resto = Num2 % Num1;
 }
 else if (Num1 || Num2 == 0)
 {
printf("Não é possível realizar divisão por zero");
 }

 printf("O resto da divisão é %f\n",Resto);
} */

#include <stdio.h>
int main(void)

{
    float Num1;
    int Num2;
    int Resto;

    printf("Informe o primeiro valor: ");
    scanf("%f", &Num1);

    printf("Informe o segundo valor: ");
    scanf("%d", &Num2);

    if (Num1 == 0 || Num2 == 0)
    {
        printf("Numeros são iguais a zero\n");
    }
    else
    {
        if (Num1 > Num2)
        {
            Resto = (int)Num1 % Num2;
        }
        else
        {
            Resto = (int)Num1 % Num2;
        }
        printf("O resto da divisão é: %d\n", Resto);
    }

    system("pause");
    return (0);
}
