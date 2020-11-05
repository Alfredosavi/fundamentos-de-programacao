/* 2) Ler a idade, o tipo (E estudante e P professor) de cinco pessoas. Se o tipo for professor
solicitar o salário. Fazer a média dos salários informados. Se o tipo for estudante solicitar se o
mesmo recebe mesada. Contar quantos recebem e quantos não recebem mesada. Garantir que
o usuário informe uma idade válida, ou seja, positiva, que o tipo seja E ou P e que recebe
mesada seja S ou N. Validar essas entradas. Isso no sentido de ficar solicitando essas entradas
até que sejam válidas. Validar para que não seja realizada uma divisão por zero. */
#include <stdio.h>

int main(void)
{
    char repetir;
    char tipo;
    int i;
    int qtde;
    int idade;
    float salario;
    char mesada;
    float media;
    float somasalario;
    int qtdemesadas, qtdemesadan;

    do
    {
        qtdemesadan = 0, qtdemesadas = 0;
        qtde = 0;
        somasalario = 0;
        for (i = 1; i < 5; i++)
        {
            printf("PESSOA %d\n", i);
            do
            {
                printf("Informe sua idade: ");
                scanf("%d", &idade);
            } while (idade < 0);

            do
            {
                fflush(stdin);
                printf("Informe o tipo (E estudante e P professor): ");
                scanf("%c", &tipo);
            } while (tipo != 'E' && tipo != 'e' && tipo != 'P' && tipo != 'p');
            if (tipo == 'P' || tipo == 'p')
            {
                printf("Informe o seu salario de professor: ");
                scanf("%d", &salario);
                somasalario = somasalario + salario;
                qtde++;
            }
            else
            {
                do
                {
                    fflush(stdin);
                    printf("Informe se voce recebe mesada (s/n): ");
                    scanf("%c", &mesada);
                } while (mesada != 's' && mesada != 'S' && mesada != 'n' && mesada != 'N');
                if (mesada == 's' || mesada == 'S')
                {
                    qtdemesadas++;
                }
                else
                {
                    qtdemesadan++;
                }
            }
        }
        media = somasalario / qtde;
        printf("Media dos salarios dos professores foi de %.2f\n", media);
        printf("%d recebem mesada e %d nao recebem mesada\n", qtdemesadas, qtdemesadan);
        printf("Deseja repetir o programa??? (s/S para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
