/* 3) Elaborar um algoritmo que leia uma letra. Se informado "F" ou "f" mostrar a 
mensagem "pessoa física", se informado "F" ou "f" mostrar a mensagem "pessoa 
jurídica" ou "tipo de pessoa inválido" para qualquer outro caractere. */
#include <stdio.h>

int main(void)
{
    char pessoa;

    printf("Informe o tipo de pessoa: ");
    scanf("%c", &pessoa);

    if (pessoa == 'f' || pessoa == 'F')
    {
        printf("pessoa fisica\n");
    }
    else if (pessoa == 'j' || pessoa == 'J')
    {
        printf("pessoa Juridica\n");
    }
    else
    {
        printf("Caractere invalido\n");
    }

    system("pause");
    return (0);
}
