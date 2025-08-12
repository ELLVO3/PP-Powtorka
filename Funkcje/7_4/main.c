#include <stdio.h>
#include <stdlib.h>

int sumNumbers(int n)
{
    int suma = 0;

    for(int i = 1; i <= n; i++)
    {
        suma += i;
    }
    return suma;
}

int main()
{
    printf("%d\n", sumNumbers(5));

    return 0;
}
