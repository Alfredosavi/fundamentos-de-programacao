/* 1) Um determinado material radioativo perde metade de sua massa a cada 500 segundos.
Dada a massa inicial, em gramas, fazer um programa que determine o tempo necessário para que 
essa massa se torne menor que 0,05 gramas.
Escreva a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos.
A massa inicial informada pelo usuário tem que ser maior que zero.
Validar essa entrada, isto é, ficar repetindo a leitura da massa inicial até que o usuário 
informe um valor válido, ou seja, maior que zero. */
#include <stdio.h>

int main(void)
{
    char repetir;
    float massa;
    int tempo;
    int horas;
    int minutos;
    int segundos;

    do
    {
        tempo = 0;

        do // validar entradas
        {
            system("cls");
            printf("Quantidade de massa (valor positivo em gramas): ");
            scanf("%f", &massa);
        } while (massa < 0);

        while ((massa / 2) > 0.05)
        {
            massa = massa / 2;
            tempo = tempo + 500;
        }

        horas = tempo / 3600;
        minutos = tempo % 3600 / 60;
        segundos = tempo % 3600 % 60;

        printf("Massa final %f em %d horas, %d minutos e %d segundos", massa, horas, minutos, segundos);

        printf("\nExecutar novamente (S/s para sim):"); // for (resp = 's' ; resp == 's' || resp == 'S' ; )
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
