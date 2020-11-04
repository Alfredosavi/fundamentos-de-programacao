/* 1) Elaborar um programa para subtrair duas datas. Apresentar o resultado, a diferença,
em anos, meses e dias. O usuário pode informar as datas em ordem crescente ou decrescente,
caberá ao programa fazer a verificação para subtrair a data menor da data maior.
Observação: para facilitar considere que os meses possuem 30 dias. Para ler um valor no
formato data armazenando-o em três variáveis distintas é possível utilizar o scanf com 
a seguinte sintaxe:
scanf("%d/%d/%d",&dia,&mês,&ano); Observar a barra entre o 1° e o 2° e entre
o 2° e o 3° símbolos de %
O usuário digitará a data no formato: 12/12/2008, incluindo as barras, e cada
variável terá o seu respectivo valor armazenado. */
#include <stdio.h>

int main(void)
{
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;
    int dias1, dias2, resultadodia, resultadoano;
    int conversaomes, conversaodia;

    printf("Insira a primeira data (Ex: dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);

    printf("Insira a segunda data (Ex: dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    dias1 = mes1 * 30 + dia1;
    dias2 = mes2 * 30 + dia2;

    if (ano1 > ano2)
    {
        printf("Data Menor: %d/%d/%d\n", dia2, mes2, ano2);
        printf("Data Maior: %d/%d/%d\n", dia1, mes1, ano1);

        resultadoano = ano1 - ano2;
        resultadodia = dias1 - dias2;
        conversaomes = resultadodia / 30;
        conversaodia = resultadodia % 30;

        printf("Data Maior - Data Menor = %d/%d/%d\n", conversaodia, conversaomes, resultadoano);
    }

    else if (ano1 < ano2)
    {
        printf("Data Menor: %d/%d/%d\n", dia1, mes1, ano1);
        printf("Data Maior: %d/%d/%d\n", dia2, mes2, ano2);

        resultadoano = ano2 - ano1;
        resultadodia = dias2 - dias1;
        conversaomes = resultadodia / 30;

        conversaodia = resultadodia % 30;

        printf("Data Maior - Data Menor = %d/%d/%d\n", conversaodia, conversaomes, resultadoano);
    }

    else if (ano1 == ano2 && dias1 > dias2)
    {
        printf("Data Menor: %d/%d/%d\n", dia2, mes2, ano2);
        printf("Data Maior: %d/%d/%d\n", dia1, mes1, ano1);

        resultadoano = ano2 - ano1;
        resultadodia = dias1 - dias2;
        conversaomes = resultadodia / 30;

        conversaodia = resultadodia % 30;

        printf("Data Maior - Data Menor = %d/%d/%d\n", conversaodia, conversaomes, resultadoano);
    }

    else if (ano1 == ano2 && dias1 > dias2)
    {
        printf("Data Menor: %d/%d/%d\n", dia1, mes1, ano1);
        printf("Data Maior: %d/%d/%d\n", dia2, mes2, ano2);

        resultadoano = ano2 - ano1;
        resultadodia = dias2 - dias1;
        conversaomes = resultadodia / 30;

        conversaodia = resultadodia % 30;

        printf("Data Maior - Data Menor = %d/%d/%d\n", conversaodia, conversaomes, resultadoano);
    }

    else if (ano1 == ano2 && dias1 == dias2) //duvida
    {
        printf("Data Menor: %d/%d/%d\n", dia2, mes2, ano2);
        printf("Data Maior: %d/%d/%d\n", dia1, mes1, ano1);
        printf("Datas iguais... resultado 0");
    }

    system("pause");
    return (0);
}
