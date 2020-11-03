/* 3) Ler uma string e copiar para a mesma string deixando apenas um espaço em branco entre 
cada palavra. */
#include <stdio.h>

int main(void)
{
    char nome[101];
    int i = 0;
    int j = 0;

    printf("Informe um nome com até 100 caracteres: ");
    gets(nome);

    while (nome[i] == ' ')
    {
        i++;
    }
    while (nome[i] != '\0')
    {
        if (nome[i] != ' ')
        {
            nome[j] = nome[i];
            j++;
        }
        else if (nome[i] == ' ' && (nome[i + 1] != ' ' && nome[i + 1] != '\0'))
        {
            nome[j] = nome[i];
            j++;
        }
        i++;
    }
    nome[j] = '\0';
    printf("\n\n");
    printf("String ==> %s.\n", nome);

    return 0;
}
