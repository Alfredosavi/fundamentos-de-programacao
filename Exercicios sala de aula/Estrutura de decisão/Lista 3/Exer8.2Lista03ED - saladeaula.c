/* 8.2) Considera-se o problema de esperar para jantar em um restaurante. O objetivo é o
algoritmo aprender a definição para DeveEsperar. Os atributos disponíveis para
descrever exemplos de possíveis casos do domínio são: alternar de restaurante, ir para 
um bar, dia sa semana, estar com fome, número de fregueses, clima, se foi feita reserva,
estimativa de espera. Implemente um algoritmo para a árvore de decisão da Figura a
seguir. As entradas são do tipo char, exceto o tempo de espera que pode ser int. Portanto,
estabeleça uma letra para cada entrada esperada, por exemplo 'S' para sim 'N' para não. */
#include <stdio.h>

int main(void)
{
    char perguntas;
    int tempo;

    printf("Fregueses? (Cheio[c] / Alguns[a] / Nenhum[n])");
    scanf("%c", &perguntas);

    if (perguntas == 'n' || perguntas == 'N')
    {
        printf("Deve esperar? -- Nao\n");
    }

    else if (perguntas == 'a' || perguntas == 'A')
    {
        printf("Deve esperar? -- Sim\n");
    }

    else if (perguntas == 'c' || perguntas == 'C')
    {
        fflush(stdin);
        printf("Esperar? (minutos)");
        scanf("%d", &tempo);

        if (tempo > 60)
        {
            printf("Deve esperar? -- Nao\n");
        }

        else if (tempo > 0 && tempo < 10)
        {
            printf("Deve esperar? -- Sim\n");
        }

        else if (tempo > 10 && tempo < 30) // ---- aba
        {
            fflush(stdin);
            printf("Com fome? (Sim[s] / Alternar para outro restaurante[a])");
            scanf("%c", &perguntas);

            if (perguntas == 's' || perguntas == 'S')
            {
                printf("Deve esperar? -- Sim\n");
            }

            else if (perguntas == 'a' || perguntas == 'A')
            {
                fflush(stdin);
                printf("Alternar para outro restaurante? -- Nao[n] / Chovendo[c]");
                scanf("%c", &perguntas);

                if (perguntas == 'N' || perguntas == 'n')
                {
                    printf("Deve esperar? -- Nao\n");
                }

                else if (perguntas == 'c' || perguntas == 'C') // ---- aba
                {
                    fflush(stdin);
                    printf("Esta chovendo? (Nao[n] / Sim[s])\n");
                    scanf("%c", &perguntas);

                    if (perguntas == 'n' || perguntas == 'N')
                    {
                        printf("Deve esperar? -- Nao\n");
                    }

                    else if (perguntas == 's' || perguntas == 'S')
                    {
                        printf("Deve esperar? -- Sim\n");
                    }

                    else
                    {
                        printf("Comando invalido\n");
                    }
                }
            }

            else
            {
                printf("Comando invalido\n");
            }
        }

        else if (tempo > 30 && tempo < 60)
        {
            fflush(stdin);
            printf("Alternar -- Nao[n] / Sim[s]");
            scanf("%c", &perguntas);

            if (perguntas == 's' || perguntas == 'S') // ---- aba
            {
                fflush(stdin);
                printf("Alternar para sexta/sabado?");
                scanf("%c", &perguntas);

                if (perguntas == 's' || perguntas == 'S')
                {
                    printf("Deve esperar? -- Sim\n");
                }

                else if (perguntas == 'n' || perguntas == 'N')
                {
                    printf("Deve esperar? -- N�o\n");
                }

                else
                {
                    printf("Comando invalido/n");
                }
            }

            else if (perguntas == 'n' || perguntas == 'N') // ---- aba
            {
                fflush(stdin);
                printf("Reserva? -- Sim[s] / Nao[n]");
                scanf("%c", &perguntas);

                if (perguntas == 'S' || perguntas == 's')
                {
                    printf("Deve esperar? -- Sim\n");
                }

                else if (perguntas == 'N' || perguntas == 'n') // ---- aba
                {
                    fflush(stdin);
                    printf("Bar? -- Sim[s] / Nao[n]");
                    scanf("%c", &perguntas);

                    if (perguntas == 'S' || perguntas == 's')
                    {
                        printf("Deve esperar? -- Sim\n");
                    }

                    else if (perguntas == 'N' || perguntas == 'n')
                    {
                        printf("Deve esperar? -- Nao\n");
                    }

                    else
                    {
                        printf("Comando invalido");
                    }
                }

                else
                {
                    printf("Comando invalido\n");
                }
            }

            else
            {
                printf("Comando invalido\n");
            }
        }
    }

    else
    {
        printf("Comando invalido\n");
    }

    system("pause");
    return (0);
}
