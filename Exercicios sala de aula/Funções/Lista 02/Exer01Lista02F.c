/* 1) A fórmula para cálculo de combinações simples de n elementos p a p é: n!/(p! * (n-p)!). 
Utilizar a função do fatorial para implementar a fórmula. Utilize essa fórmula para calcular, 
por exemplo, as possibilidades de jogos da mega-sena, a quantidade de números de telefone
possíveis, dentre outros. Nessa fórmula n significa o universo de elementos (a quantidade de 
dígitos que podem ser utilizados para compor os números de telefone (10 que são os dígitos de 0 a 9)
, a quantidade de números da loteria a serem combinados, 60 no caso da mega-sena) e p o total de 
elementos combinados (9 dígitos no caso de São Paulo, por exemplo e 6 para os números da mega-sena). */
#include <stdio.h>

int fatorial(int valor);
int combinacao(int n, int p);

int main(void)
{
    int n;
    int p;
    int retorno;
    char repetir;

    do
    {
        system("cls");
        printf("Objetivo: Calcular combinacao simples de n elementos\n");
        do
        {
            printf("Insira um numero n: ");
            scanf("%d", &n);
        } while (n <= 0);
        do
        {
            printf("Insira um numero p: ");
            scanf("%d", &p);
        } while (p <= 0 || p > n);
        retorno = combinacao(n, p);
        printf("A combinacao de %d elementos de %d a %d é %d\n", n, p, p, retorno);
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

// fatorial
int fatorial(int valor)
{
    int fat = 1;
    int i;
    for (i = valor; i >= 2; i--)
    {
        fat = fat * i;
    }
    return (fat);
}

int combinacao(int n, int p)
{
    int valorcombinacao;
    //n!/(p! * (n-p)!)
    valorcombinacao = fatorial(n) / (fatorial(p) * fatorial(n - p));
    return (valorcombinacao);
}
