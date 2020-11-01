/*  Um número é retangular se ele pode ser obtido a partir da soma de uma sequência de números
pares, inciando em 2. Por exemplo: 30 é retangular porque resulta da soma de 2 + 4 + 6 + 8 + 10. */

// Funcao para verificar se um numero � Retangular
char CalculaNumRetangular(int valor)
{
    int i;
    int soma = 0;
    for (i = 2; i <= valor; i = i + 2)
    {
        soma = soma + i;
        if (soma == valor)
        {
            return 's';
        }
    }
    return 'n';
}
