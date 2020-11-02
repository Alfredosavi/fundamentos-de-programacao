/* 4) Existem normas para determinar a potência de iluminação por metro quadrado de uma 
residência que é determinada pela utilização do cômodo, de acordo com a tabela seguinte:
Utilização	                     Classe	          Potência (por m2)

Quarto	                            A	               15
Sala de tv	                        A	               15
Sala de estar e jantar	            B	               18
Cozinha	                            B	               18
Escritório 	                        C	               20
Banheiro	                        C	               20

Elaborar um programa para:

Ler a classe do cômodo e as suas duas dimensões. Calcular a quantidade de lâmpadas necessárias 
de acordo com a tabela anterior. Suponha quer serão utilizadas somente lâmpadas de 60 wats.
Solicitar ao usuário que informe a quantidade de cômodos para os quais serão informadas as 
dimensões. Ao final informar a quantidade total de lâmpadas necessárias.
Observação: o número de lâmpadas informado deverá ser inteiro, por exemplo, se o algoritmo 
calcular 5,6 lâmpadas é necessário informar 6 lâmpadas. */
#include <stdio.h>

int main(void)
{
    float largura, comprimento;
    char classe;
    int comodos;
    int i;
    float areaa;
    int lampadatotal = 0;

    printf("Quantidade de comodos que será informado? ");
    scanf("%d", &comodos);

    for (i = 0; i < comodos; i++)
    {
        fflush(stdin);
        printf("Classe do comodo (A / B / C): ");
        scanf("%c", &classe);

        if (classe == 'a' || classe == 'A')
        {
            printf("Dimensoes do comodo Largura-Comprimento (separar com -): ");
            scanf("%f-%f", &largura, &comprimento);
            printf("\n");
            areaa = (comprimento * largura);
            lampadatotal = lampadatotal + (areaa / 4) + 0.999999;
        }
        else if (classe == 'b' || classe == 'B')
        {
            printf("Dimensoes do comodo Largura-Comprimento (separar com -): ");
            scanf("%f-%f", &largura, &comprimento);
            printf("\n");
            areaa = (comprimento * largura);
            lampadatotal = lampadatotal + (areaa / 3.33) + 0.999999;
        }
        else if (classe == 'c' || classe == 'C')
        {
            printf("Dimensoes do comodo Largura-Comprimento (separar com -): ");
            scanf("%f-%f", &largura, &comprimento);
            printf("\n");
            areaa = (comprimento * largura);
            lampadatotal = lampadatotal + (areaa / 3) + 0.999999;
        }
    }
    printf("Sera necessario %d lampadas de 60 watts\n", lampadatotal);

    system("pause");
    return (0);
}

// CONTAS

/* A) 15wats -------- 1m                      |  1lamp ----- 4m
      60wats -------- x     --> x=4m          |  LampA ----- AreaA    --> LampA = AreaA / 4
----------------------------------------------------------------------------------------------

   B) 18wats -------- 1m                      |  1lamp ----- 3,33m
      60wats -------- x     --> x=3,33m       |  LampB ----- AreaB    --> LampB = AreaB / 3,33
-----------------------------------------------------------------------------------------------

   C) 20wats -------- 1m                      |  1lamp ----- 3m
      60wats -------- x     --> x=3m          |  LampC ----- AreaC    --> LampC = AreaC / 3  */
