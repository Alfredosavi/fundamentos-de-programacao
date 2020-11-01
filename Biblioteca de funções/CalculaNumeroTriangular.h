/* Um número é triangular quando resulta da soma dos seus n dígitos sucessivos, a partir de 1.
Por exemplo: 10 é triangular porque resulta da soma de 1 + 2 + 3 + 4. O mesmo ocorre com 6,
que resulta da soma de 1 + 2 + 3. */

// Funcao para verificar se um numero � triangular
char CalculaNumTriangular(int valor)
{
    int i;
    int soma = 0;
    for (i = 1; i <= valor; i++)
    {
        soma = soma + i;
        if (soma == valor)
        {
            return 's';
        }
    }
    return 'n';
}
