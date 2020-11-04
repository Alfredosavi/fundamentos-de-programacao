/* 2) Elaborar um programa que aceita e valida uma senha com 6 dígitos numéricos, que deve 
ser armazenada em uma string.
O usuário tem três tentativas para acertar a senha, se ultrapassar esse limite, ele deve 
ser informado. O usuário também deve ser informado se ele acertou a senha em até três 
tentativas. */
#include <stdio.h>
#include <ncurses.h>

int main(void)
{
	char passArmazenada[6] = "123456";
	char passFornecida[6];
	int qtde = 1;
	int i = 0;
	printf("Informe sua senha de 6 dígitos: ");
	do
	{
		passFornecida[i] = getch();
		//putch("*");
		i++;
	} while (passFornecida[i - 1] != 13);
	return 0;
}