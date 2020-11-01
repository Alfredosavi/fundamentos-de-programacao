void OrdenarVetorBolha(int vet[], int tam)
{
    int i, j;
    int aux;

    for (i = 0; i < tam; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}
