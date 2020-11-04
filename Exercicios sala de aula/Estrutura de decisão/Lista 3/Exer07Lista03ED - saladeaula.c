/* 7) Implemente o operador OU exclusivo.
Por exemplo: Ler a informação se uma pessoa recebe vale alimentação (S/N) e se recebe
auxilio transporte (S/N). Informar que a pessoa está regularizada se recebe um e somente
um desses benefícios. */
#include <stdio.h>

int main(void)
{
    char pergunta1, pergunta2;

    fflush(stdin);
    printf("Voce recebe vale alimentacao? (S/N): ");
    scanf("%c", &pergunta1);

    fflush(stdin);
    printf("Voce recebe auxilio transporte? (S/N): ");
    scanf("%c", &pergunta2);

    if (pergunta1 == 'S' && pergunta2 == 'S' || pergunta1 == 's' && pergunta2 == 's')
    {
        printf("Voce nao esta regularizado(a)... Para estar regularizado(a) voce deve receber somente um beneficio !!!\n");
    }

    else if (pergunta1 == 'N' && pergunta2 == 'N' || pergunta1 == 'n' && pergunta2 == 'n')
    {
        printf("Voce nao esta regularizado(a)... Para estar regularizado(a) voce deve receber somente um beneficio !!!\n");
    }

    else if ((pergunta1 == 'S' || pergunta1 == 's') && (pergunta2 == 'n' || pergunta2 == 'N'))
    {
        printf("Voce esta regularizado(a)...\n");
    }

    else if ((pergunta1 == 'N' || pergunta1 == 'n') && (pergunta2 == 's' || pergunta2 == 'S'))
    {
        printf("Voce esta regularizado(a)...\n");
    }

    else
    {
        printf("Comando invalido ...\n");
    }

    system("pause");
    return (0);
}
