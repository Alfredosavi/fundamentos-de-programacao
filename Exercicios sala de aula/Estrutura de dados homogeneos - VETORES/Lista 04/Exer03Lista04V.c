/* 3) Ler uma string, contar e exibir a quantidade de cada uma das vogais existentes nessa 
string.
Armazenar essas quantidades em um vetor. É indispensável armazenar a quantidade no vetor à 
medida que a string é percorrida na forma vetVogais[indice]++ ou vetVogais[indice] =  
vetVogais[indice] + 1). Portanto, o vetor que armazena a quantidade de vogais deve ser 
inicializado com zero antes de ser utilizado. Mostrar os resultados da seguinte forma.
Vogal	        Quantidade
===================
A/a		    5
E/e		    0	
I/i		    1
O/o		    2
U/u		    0 */
#include <stdio.h>

int main()
{
	char nome[51];
	int vogais[5] = {0, 0, 0, 0, 0};
	int i;
	printf("Insira um texto de até [50]: ");
	fgets(nome, 51, stdin);
	for (i = 0; nome[i] != '\0'; i++)
	{
		if (nome[i] == 'A' || nome[i] == 'a')
		{
			vogais[0] = vogais[0] + 1;
		}
		else if (nome[i] == 'E' || nome[i] == 'e')
		{
			vogais[1] = vogais[1] + 1;
		}
		else if (nome[i] == 'I' || nome[i] == 'i')
		{
			vogais[2] = vogais[2] + 1;
		}
		else if (nome[i] == 'O' || nome[i] == 'o')
		{
			vogais[3] = vogais[3] + 1;
		}
		else if (nome[i] == 'U' || nome[i] == 'u')
		{
			vogais[4] = vogais[4] + 1;
		}
	}
	printf("Vogais     Quantidade\n");
	printf("======================\n");
	printf("A/a      %d\n", vogais[0]);
	printf("E/e      %d\n", vogais[1]);
	printf("I/i      %d\n", vogais[2]);
	printf("O/o      %d\n", vogais[3]);
	printf("U/u      %d\n", vogais[4]);
	printf("======================\n");

	return 0;
}