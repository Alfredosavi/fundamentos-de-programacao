/* 8) O que faz o algoritmo a seguir?
declare i , s como inteiro
s ← 1
repetir i = 0  até i < 5   passo 1
	s ← s * i
fim-repetir
escreva s

Defina o valor de I e S para cada iteração da estrutura de repetição
 Repetição	1ª	2ª	3ª	4ª	5ª
Valor I
Valor S

Implemente esse algoritmo utilizando a linguagem C. Por que a variável S foi inicializada com um? */
#include <stdio.h>

int main(void)
{
    int i, s = 1;

    for (i = 1; i < 5; i = i + 1)
    {
        s = s * i;
    }
    printf("%d\n", s);

    system("pause");
    return (0);
}
