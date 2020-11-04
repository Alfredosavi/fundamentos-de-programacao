/* 1) Ler um nome. Se o primeiro caractere for 'a' imprimir esse nome, caso contrário 
contar quantos caracteres 'o' o nome possui.
Repetir a leitura até que o usuário informe zero (0) como primeiro caractere do nome. */
#include <stdio.h>

int main(void)
{
	char nome[51];
	int i;
	int qtde = 0;
	do
	{
		qtde = 0;
		printf("Insira um nome: ");
		fgets(nome, 51, stdin);
		if (nome[0] == 'a' || nome[0] == 'A')
		{
			printf("%s", nome);
		}
		else
		{
			for (i = 0; nome[i] != '\0'; i++)
			{
				if (nome[i] == 'o' || nome[i] == 'O')
				{
					qtde++;
				}
			}
			printf("O nome possui %d carateres 'o'.", qtde);
		}
		printf("\n");
	} while (nome[0] != '0');

	return 0;
}