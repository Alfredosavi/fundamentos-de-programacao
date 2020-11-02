/* 3) Completar e corrigir o código a seguir para:
a) Ler a quantidade somente se a categoria é válida.
b) Validar para que não seja realizada uma divisão por zero no cálculo da média.
c) Permitir a leitura da categoria nas execuções sucessivas do programa.
d) Garantir que a média seja float */
#include <stdio.h>

int main(void)
{
    char Categoria;
    int Quantidade;
    int Soma = 0;
    int Total = 0;
    float Media;

    do
    {
        fflush(stdin);
        printf("Informe a categoria (A/B): ");
        scanf("%c", &Categoria);
        printf("Informe a quantidade: ");
        scanf("%d", &Quantidade);

        if (Categoria == 'A' || Categoria == 'B')
        {
            Soma = Soma + Quantidade;
            Total++;
        }

    } while (Categoria == 'A' || Categoria == 'B');
    if (Total == 0)
    {
        printf("Erro na Media (divisao por zero) !!!\n");
    }
    else
    {
        Media = (float)Soma / Total;
        printf("A média dos produtos é %.2f", Media);
    }
}
