/* 3) Alice e Beto são amigos e sempre que se encontram relembram os tempos de infância tirando 
par-ou-ímpar para decidir quem escolhe o filme a ser assistido, ou qual o restaurante em que vão 
almoçar, etc. Escreva um programa para determinar que ganhou a série de par-ou-ímpar.

Entrada
A primeira entrada deve ser um valor que identifica a quantidade de jogos realizados, identificada 
pela variável "n".
A seguir deve-se ler os "n" resultados dos jogos. Se Ri = 0 significa que Alice ganhou o i-ésimo 
jogo e se Ri = 1 Beto ganhou o i-ésimo jogo.

Saída
O programa deve produzir uma linha na saída, no formato "Alice ganhou X e Beto ganhou Y jogos". */
#include <stdio.h>

int main(void)
{
    int n;
    int aux;
    int valor;
    int qtde0;
    int qtde1;
    char repetir;
    do
    {
        aux = 0, qtde0 = 0, qtde1 = 0;
        system("cls");
        printf("Informe o numero de jogos que foram realizados: ");
        scanf("%d", &n);
        printf("Alice = 0 e Beto = 1\n");
        do
        {
            aux++;
            do
            {
                printf("%2d. resultado de %d: ", aux, n);
                scanf("%d", &valor);
            } while (valor != 1 && valor != 0);
            if (valor == 1)
            {
                qtde1++;
            }
            else if (valor == 0)
            {
                qtde0++;
            }
        } while (aux < n);

        printf("Alice ganhou %d e Beto ganhou %d jogos.\n", qtde0, qtde1);
        printf("Deseja repetir o programa (S/s para sim)");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
