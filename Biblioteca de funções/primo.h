int ehPrimo(int num)
{
    if (num == 1)
    {
        return -1;
    }

    int i;
    int qtde = 0;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            qtde = 1;
            return -1;
        }
    }
    return 1;
}
