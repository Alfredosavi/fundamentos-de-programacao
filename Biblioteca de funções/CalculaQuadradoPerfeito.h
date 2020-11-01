char CalculaQuadradoperfeito(int numero)
{
    int i;
    int somaimpar = 0;
    for (i = 1; i <= numero; i = i + 2)
    {
        somaimpar = somaimpar + i;
        if (somaimpar == numero)
        {
            return ('s');
        }
    }
    return ('n');
}
