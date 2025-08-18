#include <stdio.h>
#include <stdlib.h>

int sumSquares(int n, int tab[])
{
    int suma = 0;

    for(int i = 0; i < n; i++)
    {
        suma += tab[i] * tab[i];
    }

    return suma;
}

int main()
{
    int tab[] = {2,2,3};

    printf("%d\n", sumSquares(3, tab));

    return 0;
}
