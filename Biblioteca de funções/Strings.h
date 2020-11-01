int ContarCaracteres(char texto[])
{
    int i = 0;
    while (texto[i] != '\0')
    {
        i++;
    }
    return (i);
}

// verificar se um determinado caractere esta na string
// retornar -1 se letra n esta na string ou o indice da primeira ocorrencia
int VerificaCaractere(char texto[], char letra)
{
    int i = 0;
    while (texto[i] != '\0')
    {
        if (texto[i] == letra)
        {
            return (i);
        }
        i++;
    }
    return (-1);
}

//contar as ocorrencias de um caractere em uma string
int ContarOcorrencias(char texto[], char letra)
{
    int i = 0;
    int qtde = 0;
    while (texto[i] != '\0')
    {
        if (texto[i] == letra)
        {
            qtde++;
        }
        i++;
    }
    return (qtde);
}

//retornar o indice da ultima ocorrencia
int LocalizarUltimaOcorrencia(char texto[], char letra)
{
    int i = 0;
    int qtde = 0;
    while (texto[i] != '\0')
    {
        if (texto[i] == letra)
        {
            qtde = i;
        }
        i++;
    }
    return (qtde);
}
