/* 5) Elabore um programa que leia o dia e o mês de nascimento de uma pessoa e determine
o seu signo conforme a tabela a seguir:
Intervalo Signo
de 22/12 até 20/1 Capricôrnio
de 21/1 até 19/2 Aquário
de 20/2 até 20/3 Peixes
de 21/3 até 20/4 Áries
de 21/4 até 20/5 Touro
de 21/5 até 20/6 Gêmeos
de 21/6 até 21/7 Câncer
de 22/7 até 22/8 Leão
de 23/8 até 22/9 Virgem
de 23/9 até 22/10 Libra
de 23/10 até 21/11 Escorpião
de 22/11 até 21/12 Sagitário
Se informada uma data que não corresponde aos intervalos indicados, informar
que a data é inválida. */
#include <stdio.h>

int main(void)
{
    int dia, mes;

    printf("Informe o dia do seu nascimento: ");
    scanf("%d", &dia);

    printf("Informe o mes do seu nascimento: ");
    scanf("%d", &mes);

    if (dia >= 22 && dia <= 31 && mes == 12 || dia >= 1 && dia <= 20 && mes == 1) // correto
    {
        printf("de 22/12 até 20/1 Capricôrnio\n");
    }

    else if (dia >= 21 && dia <= 31 && mes == 1 || dia >= 1 && dia <= 19 && mes == 2) // correto
    {
        printf("de 21/1 até 19/2 Aquário\n");
    }

    else if (dia >= 20 && dia <= 29 && mes == 2 || dia >= 1 && dia <= 20 && mes == 3) // correto
    {
        printf("de 20/2 até 20/3 Peixes\n");
    }

    else if (dia >= 21 && dia <= 31 && mes == 3 || dia >= 1 && dia <= 20 && mes == 4) // correto
    {
        printf("de 21/3 até 20/4 Áries\n");
    }

    else if (dia >= 21 && dia <= 30 && mes == 4 || dia >= 1 && dia <= 20 && mes == 5) // correto
    {
        printf("de 21/4 até 20/5 Touro\n");
    }

    else if (dia >= 21 && dia <= 31 && mes == 5 || dia >= 1 && dia <= 20 && mes == 6) // correto
    {
        printf("de 21/5 até 20/6 Gêmeos\n");
    }

    else if (dia >= 21 && dia <= 30 && mes == 6 || dia >= 1 && dia <= 21 && mes == 7) // correto
    {
        printf("de 21/6 até 21/7 Câncer\n");
    }

    else if (dia >= 22 && dia <= 31 && mes == 7 || dia >= 1 && dia <= 22 && mes == 8) // correto
    {
        printf("de 22/7 até 22/8 Leão\n");
    }

    else if (dia >= 23 && dia <= 31 && mes == 8 || dia >= 1 && dia <= 22 && mes == 9) // correto
        ô
            á printf("de 23/8 até 22/9 Virgem\n");
    Á

        else if (dia >= 23 && dia <= 30 && mes == 9 || dia >= 1 && dia <= 22 && mes == 10) // correto
        ê
    {
        â printf("de 23/9 até 22/10 Libra\n");
        ã

            else if (dia >= 23 && dia <= 31 && mes == 10 || dia >= 1 && dia <= 21 && mes == 11) // correto
        {
            printf("de 23/10 até 21/11 Escorpião\n");
        }

        else if (dia >= 22 && dia <= 30 && mes == 11 || dia >= 1 && dia <= 21 && mes == 12) // correto
        {
            printf("de 22/11 até 21/12 Sagitário\n");
        }

        else
        {
            printf("Data invalida...\n");
        }

        system("pause");
        return (0);
    }
