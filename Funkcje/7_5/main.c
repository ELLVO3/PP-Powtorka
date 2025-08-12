#include <stdio.h>
#include <stdlib.h>

int sumSquares(int n)
{
    int suma = 0;

    for(int i = 1; i <= n; i++)
    {
        suma += i*i;
    }
    return suma;
}

int main()
{
    printf("%d\n", sumSquares(3));

    return 0;
}
