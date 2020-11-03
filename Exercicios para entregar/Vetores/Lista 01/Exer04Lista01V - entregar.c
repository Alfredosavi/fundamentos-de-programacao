/* 4 Desafio) Elabore um programa para automatizar um caixa de um supermercado.
Especificações do programa:
Em um vetor armazenar o valor do produto e em outro (mesmo índice) a quantidade. Um valor 
negativo para o valor indica a finalização da entrada de dados e não deve ser solicitado que 
o usuário informe a quantidade.
Depois de lidos os valores apresentar as seguintes opções como um menu utilizando switch case:
a) Listar produtos.
Apresentando da seguinte forma
Valor Unitário		Quantidade	    Valor total
10				         1			10,00
1,23				    10			12,30
b) Média, Máximo e Mínimo
Apresentar a média da compra, o produto com o maior valor e o produto com o menor valor unitário.
c) Troco
Apresentar o valor da compra. Solicitar o pagamento e informar o troco, indicando as cédulas de 
cada tipo e os centavos correspondentes ao troco.
d) Listagem dos produtos
Apresentar a listagem dos produtos em ordem invertida entrada: o último valor informado 
é o primeiro a ser mostrado e assim sucessivamente.
e) Sair.
Sair do programa */
#include <stdio.h>

int main(void)
{
    char repetir;
    char opcao;
    int i;
    float maiorvalor;
    float menorvalor;
    float preco[100];
    int quantidade[100];
    int qtdetotal;
    float valortotalvetor;
    float valortotal;
    int qtdevet;
    float troco;
    float aux;
    int cem, cinq, vin, dez, cinco, dois, um, cent;

    do
    {
        qtdevet = 0, valortotal = 0, qtdetotal = 0;
        system("cls");
        for (i = 0; i < 100; i++)
        {
            printf("Informe o valor do Produto[%d] R$: ", i + 1);
            scanf("%f", &preco[i]);
            if (preco[i] <= 0)
            {
                break;
            }
            else
            {
                do
                {
                    printf("Informe a quantidade[%d]: ", i + 1);
                    scanf("%d", &quantidade[i]);
                    qtdevet++;
                } while (quantidade[i] <= 0);
            }
            printf("\n");
        }

        do
        {
            printf("A - Listar os produtos\n");
            printf("B - Media da compra, Maximo e Minimo\n");
            printf("C - Troco\n");
            printf("D - Listagem dos produtos (invertido)\n");
            printf("E - Sair\n");
            printf("Opcao: ");
            fflush(stdin);
            scanf("%c", &opcao);
            switch (opcao)
            {
            case 'A': // finish
            case 'a': // a) Listar produtos.
            {
                valortotal = 0, qtdetotal = 0;
                printf("\n");
                printf("=======================================================\n");
                printf("Valor Unitario      Quantidade      Valor total\n");
                for (i = 0; i < qtdevet; i++)
                {
                    valortotalvetor = preco[i] * quantidade[i];
                    valortotal = valortotalvetor + valortotal;
                    printf("%.2f                   %d             %.2f\n", preco[i], quantidade[i], valortotalvetor);
                }
                printf("=======================================================\n");
                printf("Total da Compra R$: %.2f\n", valortotal);
                break;
            }

            case 'B':
            case 'b': // b) Média, Máximo e Mínimo
            {
                valortotal = 0, qtdetotal = 0;
                printf("\n");
                for (i = 0; i < qtdevet; i++)
                {
                    valortotalvetor = preco[i] * quantidade[i];
                    valortotal = valortotal + valortotalvetor;
                    qtdetotal = qtdetotal + quantidade[i];
                }
                troco = valortotal / qtdetotal; // media
                maiorvalor = preco[0];
                menorvalor = preco[0];
                for (i = 0; i < qtdevet; i++)
                {
                    if (preco[i] > maiorvalor)
                    {
                        maiorvalor = preco[i];
                    }
                    else if (preco[i] < menorvalor)
                    {
                        menorvalor = preco[i];
                    }
                }
                printf("Media = %.2f\nValor mais alto = R$: %.2f\nValor mais baixo = R$: %.2f\n", troco, maiorvalor, menorvalor);
                break;
            }

            case 'c': // finish
            case 'C': // c) Troco
            {
                valortotal = 0, qtdetotal = 0;
                printf("\n");
                for (i = 0; i < qtdevet; i++)
                {
                    valortotalvetor = preco[i] * quantidade[i];
                    valortotal = valortotal + valortotalvetor;
                }
                do
                {
                    printf("Informe a quantia que o cliente forneceu (superior a %.2f) R$: ", valortotal);
                    scanf("%f", &troco);
                } while (troco <= valortotal);
                aux = troco - valortotal;
                printf("Valor Total R$: %.2f\n", valortotal);
                printf("Valor Fornecido R$: %.2f\n", troco);
                printf("Troco R$: %.2f\n", aux);
                cem = aux / 100;
                cinq = (int)aux % 100 / 50;
                vin = (int)aux % 100 % 50 / 20;
                dez = (int)aux % 100 % 50 % 20 / 10;
                cinco = (int)aux % 100 % 50 % 20 % 10 / 5;
                dois = (int)aux % 100 % 50 % 20 % 10 % 5 / 2;
                um = (int)aux % 100 % 50 % 20 % 10 % 5 % 2;
                cent = (aux - (int)aux) * 100;
                printf("\n\n");
                printf("%d notas de R$: 100,00\n%d notas de R$: 50,00\n%d notas de R$: 20,00\n%d notas de R$: 10,00\n", cem, cinq, vin, dez);
                printf("%d notas de R$: 5,00\n%d notas de R$: 2,00\n%d moedas de R$: 1,00\n%d centavos.\n\n", cinco, dois, um, cent);
                break;
            }

            case 'd': // finish
            case 'D': // d) Listagem dos produtos
            {
                valortotal = 0, qtdetotal = 0;
                printf("\n");
                valortotal = 0;
                float InversePreco[qtdevet];
                int InverseQtde[qtdevet];

                for (i = 0; i < qtdevet; i++)
                {
                    InversePreco[i] = preco[(qtdevet - 1) - i];
                    InverseQtde[i] = quantidade[(qtdevet - 1) - i];
                }

                printf("=======================================================\n");
                printf("Valor Unitario      Quantidade      Valor total\n");
                for (i = 0; i < qtdevet; i++)
                {
                    valortotalvetor = InversePreco[i] * InverseQtde[i];
                    valortotal = valortotal + valortotalvetor;
                    printf("%.2f                   %d             %.2f\n", InversePreco[i], InverseQtde[i], valortotalvetor);
                }
                printf("=======================================================\n");
                printf("Total da Compra R$: %.2f\n", valortotal);
                break;
            }

            case 'e': // finish
            case 'E': // e) Sair.
            {
                exit(0); // **** abort
                break;
            }

            default: // Finish
            {
                printf("\n");
                printf("Opcao Invalida !!!\n");
            }
            }
            printf("\n");
            printf("Deseja voltar para o menu de opcoes (S/s para sim): ");
            fflush(stdin);
            scanf("%c", &repetir);
        } while (repetir == 'S' || repetir == 's');
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
