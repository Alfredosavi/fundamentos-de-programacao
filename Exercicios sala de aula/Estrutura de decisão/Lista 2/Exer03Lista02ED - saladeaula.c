/* 3) Ler três valores inteiros e colocá-los em ordem crescente. Os valores devem ser 
apresentados com uma instrução:
printf("Menor: %d  Meio: %d  Maior: %d\n",menor,meio,maior);
Sugestão: dividir o problema em partes: encontrar o maior, o menor e o do meio 
separadamente. Armazenar os valores em variável e mostrá-los com uma instrução: */
#include <stdio.h>

int main(void)
{
    int valor1, valor2, valor3;
    int maior, meio, menor;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);

    printf("Insira o terceiro valor: ");
    scanf("%d", &valor3);

    // menor
    if (valor1 < valor2 && valor1 < valor3)
    {
        menor = valor1;
    }
    else if (valor2 < valor3)
    {
        menor = valor2;
    }
    else
    {
        menor = valor3;
    }

    // maior
    if (valor1 > valor2 && valor1 > valor3)
    {
        maior = valor1;
    }
    else if (valor2 > valor3)
    {
        maior = valor2;
    }
    else
    {
        maior = valor3;
    }

    //meio
    if (valor1 > valor2 && valor1 < valor3 || valor1 < valor2 && valor1 > valor3)
    {
        meio = valor1;
    }
    else if (valor2 > valor1 && valor2 < valor3 || valor2 < valor1 && valor2 > valor3)
    {
        meio = valor2;
    }
    else
    {
        meio = valor3;
    }

    printf("Ordem crestente: %d, %d, %d\n", menor, meio, maior);

    return 0;
}
