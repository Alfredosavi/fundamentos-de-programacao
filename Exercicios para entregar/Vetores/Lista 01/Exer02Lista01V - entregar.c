/* 2) Ler duas notas de 3 alunos, fazer a média de cada aluno e armazená-la em um vetor.
Validar para que seja informado um valor positivo para as notas. Validar separadamente cada nota.
Contar e mostrar quantos alunos estão acima da média (maior ou igual a 7,0) e quantos estão 
abaixo da média (menor que 7,0).
Validar para que não seja realizada uma divisão por zero no cálculo da média. */
#include <stdio.h>

int main(void)
{
    int i;
    float p1, p2;
    float media;
    float nota[3];

    for (i = 0; i < 3; i++)
    {
        do
        {
            printf("\n");
            printf("Insira a nota da P1 do aluno %d: ", i + 1);
            scanf("%f", &p1);
        } while (p1 < 0);
        do
        {
            printf("Insira a nota da P2 do aluno %d: ", i + 1);
            scanf("%f", &p2);
        } while (p2 < 0);

        media = (p1 + p2) / 2;
        nota[i] = media;
    }

    for (i = 0; i < 3; i++)
    {
        if (nota[i] >= 7)
        {
            printf("Aluno %d passou !!!\n", i + 1);
        }
        else
        {
            printf("Aluno %d não passou !!!\n", i + 1);
        }
    }

    return 0;
}
