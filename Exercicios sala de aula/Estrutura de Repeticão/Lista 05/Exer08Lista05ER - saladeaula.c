/*8) Qual o objetivo do algoritmo representado no trecho de código a seguir. */
#include <stdio.h>

int main(void)
{
    int Idade;
    fflush(stdin);
    char Tipo;
    int Salario;
    int Cont;
    for (Cont = 1; Cont <= 5; Cont++)
    {
        do
        {
            printf("Informe a Idade:");
            scanf("%d", &Idade);
        } while (Idade < 0);

        do
        {
            printf("Informe o tipo, (E)estudante/(P)Professor:");
            fflush(stdin);
            scanf("%c", &Tipo);
        } while (Tipo != 'E' && Tipo != 'e' && Tipo != 'P' && Tipo != 'p');

        if (Tipo == 'p' || Tipo == 'P')
        {
            do
            {
                printf("Informe o salario:");
                scanf("%f", &Salario);
            } while (Salario <= 0);
        }
    }

    return 0;
}

// vai repetir o formulario 4 vezes perguntando a idade e o tipo (professor ou estudante) se for professor ele pergunta o salario...
