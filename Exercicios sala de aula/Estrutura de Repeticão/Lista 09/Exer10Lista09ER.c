/* 10) Ler a quantidade e o respectivo valor de produtos. Parar a leitura quando informado valor
0 ou negativo para a quantidade. Ler o valor somente se informada quantidade válida. O valor
deve ser validado para que seja positivo.
Calcular o valor total da compra.
Calcular o valor médio dos itens comprados (fazer a média).
Do valor total da compra separar e mostrar reais e centavos.
Dos reais separar em cédulas de 100, 50, 20, 10, 5, 2 e moedas de 1.
Exemplo:
Informe a quantidade: 10
Informe o valor: 5.75
Informe a quantidade: 1
Informe o valor: 10
Informe a quantidade: 0
Total da compra: 67.50
São 67 reais e 50 centavos
São 6 cédulas de 10, 1 cédula de 5 e 1 cédula de 2 */
#include <stdio.h>

int main(void)
{
    char repetir;
    int qtde, qtdetotal;
    float valor, valortotal;
    float media;
    int reais, centavos, aux;
    int um, dois, cinco, dez, vinte, cinque, cem;
    do
    {
        qtdetotal = 0, valortotal = 0;
        um = 0, dois = 0, cinco = 0, dez = 0, vinte = 0, cinque = 0, cem = 0;
        system("cls");
        do
        {
            printf("Informe a quantidade: ");
            scanf("%d", &qtde);
            if (qtde > 0)
            {
                printf("Informe o valor: ");
                scanf("%f", &valor);
            }
            printf("\n");
            if (valor > 0 && qtde > 0)
            {
                valortotal = valortotal + (valor * qtde);
                qtdetotal = qtdetotal + qtde;
            }
        } while (qtde > 0);
        if (qtdetotal != 0)
        {
            media = valortotal / qtdetotal;
            printf("Media Total da compra: R$:%.2f\n", media);
        }
        else
        {
            printf("Impossivel calcular media !!!\n");
        }
        printf("Total da compra: R$:%.2f\n\n", valortotal);
        aux = valortotal;
        reais = (int)aux;
        centavos = (valortotal - reais) * 100;
        printf("São %d reais e %d centavos\n\n", reais, centavos);
        while (aux > 0) //
        {
            if (aux == 1)
            {
                um++;
                aux = aux - 1;
            }
            if (aux >= 2 && aux < 5)
            {
                dois++;
                aux = aux - 2;
            }
            if (aux >= 5 && aux < 10)
            {
                cinco++;
                aux = aux - 5;
            }
            if (aux >= 10 && aux < 20)
            {
                dez++;
                aux = aux - 10;
            }
            if (aux >= 20 && aux < 50)
            {
                vinte++;
                aux = aux - 20;
            }
            if (aux >= 50 && aux < 100)
            {
                cinque++;
                aux = aux - 50;
            }
            if (aux >= 100)
            {
                cem++;
                aux = aux - 100;
            }
        }
        printf("\n");
        printf("São %d cedulas de R$:100, 00\n%d cedulas de R$:50,00\n%d cedulas de R$:20,00\n%d cedulas de R$:10,00\n%d cedulas de R$:5,00\n%d cedulas de R$:2,00\n%d moedas de R$:1,00\n%d centavos\n\n", cem, cinque, vinte, dez, cinco, dois, um, centavos);
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 's' || repetir == 'S');

    return 0;
}
