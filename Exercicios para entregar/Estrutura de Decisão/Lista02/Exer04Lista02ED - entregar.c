/* 4)A figura a seguir representa uma árvore de decisão para identificar se um paciente está
saudável ou doente. Elabore um algoritmo que implementa essa árvore de decisão. */
#include <stdio.h>

int main(void)
{
    char pergunta;
    float temperatura;

    printf("O paciente se sente bem? ");
    scanf("%c", &pergunta);

    if (pergunta == 'S' || pergunta == 's' || pergunta == 'y' || pergunta == 'Y')
    {
        printf("Saudavel\n");
    }

    else
    {
        fflush(stdin);
        printf("Paciente tem dor? ");
        scanf("%c", &pergunta);

        if (pergunta == 'S' || pergunta == 's' || pergunta == 'y' || pergunta == 'Y')
        {
            printf("Paciente esta doente\n");
        }

        else
        {
            printf("Temperatura do paciente em celsius: ");
            scanf("%f", &temperatura);

            if (temperatura > 37)
            {
                printf("Doente\n");
            }

            else
            {
                printf("Saudavel\n");
            }
        }
    }

    system("pause");
    return (0);
}
