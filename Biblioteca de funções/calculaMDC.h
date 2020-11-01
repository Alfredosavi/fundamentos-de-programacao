int calculaMDC(int num1, int num2)
{
    int mdc = 1;
    int maior;
    int menor;
    int i, j;
    int temp;
    int temp2;
    if (num1 > num2)
    {
        maior = num1;
        menor = num2;
    }
    else
    {
        maior = num2;
        menor = num1;
    }
    for (i = maior; i > 1; i--)
    {
        if (maior % i == 0)
        {
            temp = i;
        }
        for (j = menor; j > 1; j--)
        {
            if (menor % j == 0)
            {
                temp2 = j;
            }
            if (temp2 == temp)
            {
                mdc = temp2;
                break;
            }
        }
        if (mdc != 1)
        {
            break;
        }
    }
    return (mdc);
}
