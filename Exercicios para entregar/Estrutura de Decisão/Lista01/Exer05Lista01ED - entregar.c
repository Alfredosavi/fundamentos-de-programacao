/* 5) Elaborar um programa que, dada a idade de um nadador, classifique-o em uma das seguintes 
categorias:
infantil A = 5 a 7 anos
infantil B = 8 a 10 anos
juvenil A = 11 a 13 anos
juvenil B = 14 a 17 anos
senior = maiores de 17 anos
não categorizado como atleta = menor de 5 anos, mas se o valor informado é negativo informar o 
usuário que o valor é inválido para o escopo da solução.
Sugestão: utilizar estruturas ifs encadeadas, por que? */
#include <stdio.h>

int main(void)
{
    int idade;

    printf("Insira a idade do nadador(a): ");
    scanf("%d", &idade);

    if (idade < 0)
    {
        printf("Valor é invalido (idade negativa)");
    }
    else if (idade <= 5)
    {
        printf("Idades menores que 5 anos não são considerados como atletas");
    }
    else if (idade >= 5 && idade <= 7)
    {
        printf("Categoria: Infantil A");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Categoria: Infantil B");
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("Categoria: Juvenil A");
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("Categoria: Juvenil B");
    }
    else
    {
        printf("Categoria: Senior");
    }
}
