/* 10) Uma indústria fabrica roupas categorizadas em masculinas, femininas e infantis. 
Ler a categoria (M, F ou I) e a respectiva quantidade. Calcular:
	a) O total de produtos por categoria;
    b) O percentual de produtos da categoria infantil;
Validar para que seja informada uma categoria válida. Finalizar a leitura quando informado um valor 
negativo para a quantidade.
Ler inicialmente a quantidade e depois a categoria. Se informada uma quantidade negativa não ler a 
categoria. */
#include <stdio.h>

int main(void)
{
    char categoria;
    int totalI = 0, totalM = 0, totalF = 0, qtde;
    float percentualI;

    do
    {
        printf("Informe a quantidade: ");
        scanf("%d", &qtde);
        if (qtde > 0)
        {
            do
            {
                printf("Informe a categoria (i/m/f): ");
                fflush(stdin);
                scanf("%c", &categoria);
            } while (categoria != 'i' && categoria != 'm' && categoria != 'f');

            if (categoria == 'i')
            {
                totalI = totalI + qtde;
            }
            else if (categoria == 'm')
            {
                totalM = totalM + qtde;
            }
            else
            {
                totalF = totalF + qtde;
            }
        }
    } while (qtde > 0);

    percentualI = totalI * 100.0 / (totalF + totalI + totalM);
    printf("Percentual de infantil é de %.2f\n", percentualI);

    system("pause");
    return (0);
}
