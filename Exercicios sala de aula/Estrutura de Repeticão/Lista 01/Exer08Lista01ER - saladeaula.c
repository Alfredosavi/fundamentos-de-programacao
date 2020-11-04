/* 8) Fazer um programa que faça o levantamento dos candidatos que se inscreveram para vagas em uma 
empresa.
Considerando que para cada candidato a empresa tenha obtido as seguintes informações:
	. idade
	. nacionalidade (B ou E)
	. possui curso superior (S ou N)
	Faça um programa para determinar:
a) a quantidade de brasileiros;
b) a quantidade de estrangeiros;
c) a idade média dos brasileiros sem curso superior;
d) a menor idade entre os estrangeiros com curso superior;
Estabelecer uma condição para finalizar a entrada de dados do programa.
Por exemplo, idade negativa. Se idade negativa não ler as informações de nacionalidade e se possui 
curso superior. */
#include <stdio.h>

int main(void)
{
    int idade = 12; //qualquer valor positivo para assegurar a entrada dessa variavel no while
    char nacionalidade, cursoSuperior;
    int qtdeBras = 0, qtdeEstrangeiro = 0, somaIdade = 0, totalPessoas = 0, menorIdade = 500;
    float media;

    while (idade >= 0)
    {
        printf("Informe a idade da pessoa: ");
        scanf("%d", &idade);
        if (idade >= 0) //para excluir do processamento o dado que representa a condição de saida do while...
        {
            printf("Nacionalidade brasileira ou estrangeira? (b/B/e/E): ");
            fflush(stdin); // Linux = __fpurge(stdin); # include <stdio_ext.h>
            scanf("%c", &nacionalidade);

            printf("Possui curso superior? (s/S/n/N): ");
            fflush(stdin);
            scanf("%c", &cursoSuperior);

            if (nacionalidade == 'B' || nacionalidade == 'b')
            {
                qtdeBras++;

                if (cursoSuperior == 'N' || cursoSuperior == 'n')
                {
                    somaIdade = somaIdade + idade;
                    totalPessoas++;
                }
            }
            else
            {
                qtdeEstrangeiro++;

                if (cursoSuperior == 's' || cursoSuperior == 'S')
                {
                    if (idade < menorIdade)
                    {
                        menorIdade = idade;
                    }
                }
            }
        }
    } // fim do while

    if (totalPessoas > 0)
    {
        media = (float)somaIdade / totalPessoas;
        printf("Media de idade: %.2f\n", media);
    }

    if (menorIdade != 500)
    {
        printf("Menor idade de estrangeiro com curso superior: %d\n", menorIdade);
    }

    printf("Quantidade de brasileiros: %d\n", qtdeBras);
    printf("Quantidade de estrangeiros: %d\n", qtdeEstrangeiro);

    system("pause");
    return (0);
}
