/* 7) O que faz o algoritmo a seguir?
declare i ,  s como inteiro
s ← 0
repetir i = 0  até i < 10  passo 1
	s ← s + i
fim-repetir
escreva s
Defina o valor de I e S para cada iteração da estrutura de repetição
 Repetição	|1ª	|2ª	|3ª	|4ª	|5ª	|6ª	|7ª	|8ª	|9ª	|10ª|
Valor I		|	|	|	|	|	|	|	|   |   |   |
Valor S		|	|	|	|	|	|	|	|	|	|   |

Implemente esse algoritmo utilizando a linguagem C. Por que a variável S foi inicializada com zero? */
#include <stdio.h>

int main(void)
{
    int s = 0, i;

    for (i = 0; i < 10; i = i + 1)
    {
        s = s + i;
    }
    printf("\n%d\n", s);

    system("pause");
    return (0);
}
