/* 4) Ler o gênero (F ou f para feminino, M ou m para masculino. Para qualquer outro 
caractere informar que não há fórmula disponível e finalizar o programa).
Se informado um caractere válido ler a altura da pessoa e calcular seu peso ideal, 
utilizando as seguintes fórmulas:
a) para homens: (72,7 * h) - 58;
b) para mulheres: (62,1 * h) - 44,7. */
#include <stdio.h>

int main(void)
{
    char Pessoa;
    float conta;
    float altura;

    printf("Informe o genero: ");
    scanf("%c", &Pessoa);

    if (Pessoa != 'f' && Pessoa != 'F' && Pessoa != 'M' && Pessoa != 'm')
    {
        printf("Não há formula disponivel");
    }
    else
    {
        if (Pessoa == 'f' || Pessoa == 'F')
        {
            printf("Informe a sua altura: ");
            scanf("%f", &altura);
            conta = (62.1 * altura) - 44.7;
            printf("Seu peso ideal é de: %.2f", conta);
        }
        else if (Pessoa == 'm' || Pessoa == 'M')
        {
            printf("Informe a sua altura: ");
            scanf("%f", &altura);
            conta = (72.7 * altura) - 58;
            printf("Seu peso ideal é de: %.2f", conta);
        }
    }

    return 0;
}
