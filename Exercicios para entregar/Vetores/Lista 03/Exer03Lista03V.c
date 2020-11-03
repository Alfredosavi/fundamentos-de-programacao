/* 3) Ler uma string e copiá-la para outra string sem os possíveis espaços em branco no 
início e no final.
Também devem ser eliminados dois ou mais espaços sucessivos entre as palavras. */
#include <stdio.h>

int main(void)
{
    char nome[101];
    int i = 0;
    int j = 0;

    printf("Informe um nome com at� 100 caracteres: ");
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
        else if (nome[i] == ' ' && (nome[i + 1] != ' ' && nome[i + 1] != '\0')) //copiar somente um espaco entre palavras
        {
            nome[j] = nome[i]; // copiar o espaco antes do caractere
            j++;
        }
        i++;
    }

    //finalizar a string
    nome[j] = '\0';
    printf("\n\n");
    printf("String ==> %s.\n", nome);

    return 0;
}
