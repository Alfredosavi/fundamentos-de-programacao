/*6) Faça um programa que calcule a quantidade necessária de latas de tinta e o custo para
pintar um tanque cilíndrico. Apresentar o custo com duas casas decimais. Se para a
quantidade de latas de tinta for obtido um resultado fracionário arredondar o número para o
próximo inteiro. Por exemplo: 5.2 apresentar 6 latas de tinta. A área a ser pintada é
calculada pela fórmula: AREA = 2 * PI * raio2
 + 2 * PI * raio * altura. Uma lata de tinta
contém 3,6 litros e que cada litro de tinta é suficiente para pintar três metros quadrados.
Observação: a função int ceil (float num) faz arredondamento do número para cima, ou
seja, para o próximo inteiro. É necessário incluir essa biblioteca com # include <math.h>
Exemplo de uso:
Valor = ceil(Variável); */
#include <stdio.h>

int main(void)
{
    float raio;
    float altura;
    float area;
    float custotinta;
    int latas;
    float custo;

    printf("Informe o raio do tanque cilindrico (em metros): ");
    scanf("%f", &raio);

    printf("Informe a altura do tanque cilindrico (em metros): ");
    scanf("%f", &altura);

    printf("Informe o custo de uma lata de tinta: ");
    scanf("%f", &custotinta);

    area = 2 * 3.1415 * raio * raio + 2 * 3.1415 * raio * altura;
    latas = (area / 3 / 3.6) + 0.999999;
    custo = custotinta * latas;

    printf("A area do cilindro é de %.f m² e precisa de %.d latas de tinta com o custo de R$: %.2f\n", area, latas, custo);

    system("pause");
    return (0);
}
