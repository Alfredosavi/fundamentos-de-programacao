/* 1) Ler um número e ler um dígito. Contar quantos dígitos o número possui.
Exemplos e informado 5 como dígito:
55 possui 2 dígitos cinco;
10 possui nenhum dígitos cinco;
1550 possui dois  dígitos cinco;
50050 possui dois dígitos cinco;
Repetir o programa enquanto informados valores positivos. */
#include <stdio.h>
int main(void)
{
    char repetir;
    int numero, digito;
    int qtdedigito;
    int contador;
    int numero_value;
    int aux;
    int posterior;
    do
    {
        system("cls");
        qtdedigito = 0;
        contador = 0;
        printf("Informe um numero: ");
        scanf("%d", &numero);
        printf("Informe um digito: ");
        scanf("%d", &digito);
        numero_value = numero;
        do
        {
            numero = numero / 10;
            qtdedigito++;

            posterior = numero / 10;
            aux = numero - (posterior * 10);
            if (aux == digito)
            {
                contador++;
            }
        } while (numero > 0);

        aux = numero_value % 10;
        if (aux == digito)
        {
            contador++;
        }
        printf("O numero %d possui %d quantidade de digitos ...\n\n", numero_value, qtdedigito);
        printf("O numero %d possui %d digitos de numero %d\n", numero_value, contador, digito);
        printf("Deseja repetir? (S/s para sim)... ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');
}
