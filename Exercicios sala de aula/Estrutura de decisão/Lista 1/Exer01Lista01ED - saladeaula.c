/* 1) Elaborar um algoritmo que lê um número que representa uma senha, verifica se a
mesma está correta ou não, comparando-a com 12345 e informar "Acesso autorizado" ou
"Acesso negado", conforme o caso. */
#include <stdio.h>

int main(void)
{
    int senhaArmazenada = 12345;
    int senhaInformada;

    printf("Informe a senha numerica: ");
    scanf("%d", &senhaInformada);

    if (senhaArmazenada == senhaInformada)
    {
        printf("Acesso Confirmado");
    }
    else
    {
        printf("Acesso Negado");
    }

    return 0;
}
