/* 9) Qual o objetivo do algoritmo representado no trecho de código a seguir. */
#include <stdio.h>

int main(void)
{
   int Num;
   int Tentativas = 0;

   do
   {
      printf("Informe um valor positivo: ");
      scanf("%f", &Num);
      if (Num < 0)
      {
         Tentativas++;
      }
   } while (Num < 0);

   printf("Foram realizas %d tentativas !!!\n", Tentativas);

   return 0;
}

// Contar quantos numeros negativos foram colocados no programa.
