/*3) Ler um nome e ler um caractere. Fazer uma função para contar quantos caracteres o nome possui.
Fazer uma função para verificar se o caractere informado está na string (nome lido). Se estiver, 
mostrar o índice em que o mesmo está armazenado.
Considerar a última ocorrência do caractere se existir mais de uma. 
Complementar o exercício considerando a primeira concorrência do caractere na string.*/
#include <stdio.h>

int VerificaCaractere(char texto[], char letra);
int ContarOcorrencias(char texto[], char letra);
int ContarCaracteres(char texto[]);

int main(void)
{
    char nome[51];
    char caractere;

    printf("Informe um nome: ");
    gets(nome);
    fflush(stdin);
    printf("Informe o caractere: ");
    scanf("%c", &caractere);

    printf("%s possui %d caracteres\n", nome, ContarCaracteres(nome));
    if (VerificaCaractere(nome, caractere) == -1)
    {
        printf("%c n�o esta na string %s\n", caractere, nome);
    }
    else
    {
        printf("A primeira ocorrencia de %c na string %s é no indice %d\n", caractere, nome, VerificaCaractere(nome, caractere));
    }
    printf("%c ocorre %d vezes na string %s\n", caractere, ContarOcorrencias(nome, caractere), nome);

    return 0;
}

int VerificaCaractere(char texto[], char letra)
{
    int i = 0;
    while (texto[i] != '\0')
    {
        if (texto[i] == letra)
        {
            return (i);
        }
        i++;
    }
    return (-1);
}

//contar as ocorrencias de um caractere em uma string
int ContarOcorrencias(char texto[], char letra)
{
    int i = 0;
    int qtde = 0;
    while (texto[i] != '\0')
    {
        if (texto[i] == letra)
        {
            qtde++;
        }
        i++;
    }
    return (qtde);
}

int ContarCaracteres(char texto[])
{
    int i = 0;
    while (texto[i] != '\0')
    {
        i++;
    }
    return (i);
}