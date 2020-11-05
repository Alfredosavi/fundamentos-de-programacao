/*9) Ler um número que representa a quantidade de dias. Informe os anos (com 360 dias),
meses (considere-os com 30 dias) e os dias contidos nesse valor.
Exemplo: 390 dias contém 1 ano(s), 1 mês(es) e 0 dia(s). */
#include <stdio.h>

int main(void)
{
    int quantdias;
    int mes;
    int ano;
    int dias;

    printf("Insira a quantidade de dias: ");
    scanf("%d", &quantdias);

    ano = quantdias / 360;
    mes = quantdias % 360 / 30;
    dias = quantdias % 360 % 30;

    printf("%.d dias contem %.d ano(s), %.d mes(es) e %.d dia(s)\n", quantdias, ano, mes, dias);

    system("pause");
    return (0);
}
