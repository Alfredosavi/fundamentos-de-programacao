/* 2) Fazer uma função que converte de centímetros para polegadas. Usar essa função para:
a) Imprimir uma tabela de conversão de centímetros para polegadas entre 1 a 20.
b) Mostrar o valor em polegadas de um determinado valor informado pelo usuário. */
#include <stdio.h>
float cmparapolegadas(float numero);

int main(void)
{
    char repetir;
    char opcao;
    float valor1;
    int i;

    do
    {
        system("cls");
        printf("Converter cm em polegadas\n");
        printf("1 - Imprimir tabela de conversao de cm em pol de 1 a 20\n");
        printf("2 - Converter um valor em cm para polegadas\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);
        switch (opcao)
        {
        case '1':
        {
            for (i = 1; i <= 20; i++)
            {
                printf("%2d centimetros equivale a %.2f polegadas\n", i, cmparapolegadas(i));
            }
            break;
        }
        case '2':
        {
            printf("Informe um valor em cm: ");
            scanf("%f", &valor1);
            printf("%.2f cm equivale a %.2f polegadas\n", valor1, cmparapolegadas(valor1));
            break;
        }
        default:
        {
            printf("Opcao Invalida !!!\n");
        }
        }
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

float cmparapolegadas(float numero)
{
    float resultado;
    resultado = numero * 0.39370;
    return (resultado);
}
