/*4) Complete o código a seguir para:
a) Ler a quantidade somente se a categoria é válida.
b) Validar para que não seja realizada uma divisão por zero no cálculo da média.
c) Permitir a leitura da categoria nas execuções sucessivas do programa.
d) Garantir que a média seja float e que não seja realizada divisão por zero.
/*Ler o valor de um produto e a quantidade.
 Somente ler a quantidade se o valor é válido.
 Fazer a média final, float.*/
#include <stdio.h>

int main(void)
{
    char Categoria;
    int Quantidade;
    float Valor;
    int Soma = 0;
    int Qtde = 0;
    float Media;

    do
    {
        fflush(stdin);
        printf("Informe a Categoria (A/B): ");
        scanf("%c", &Categoria);

        printf("Informe o valor: ");
        scanf("%f", &Valor);

        printf("Informe a quantidade: ");
        scanf("%d", &Quantidade);

        if (Categoria == 'B' || Categoria == 'A')
        {
            Soma = Soma + (Valor * Quantidade);
            Qtde++;
        }
    } while (Categoria == 'A' || Categoria == 'B');

    if (Qtde == 0)
    {
        printf("Media incorreta (divisão por zero) ...\n");
    }
    else
    {
        Media = (float)Soma / Qtde;
        printf("Média geral (de todas as entradas): %.2f\n", Media);
    }
}
