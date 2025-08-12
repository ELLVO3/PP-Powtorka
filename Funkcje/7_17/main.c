#include <stdio.h>
#include <stdlib.h>

int calculate17(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    int suma = 0;

    for(int i = 0; i < n; i++)
    {
        suma += calculate17(i);
    }
    return suma;
}

int main()
{
    printf("%d\n", calculate17(4));
    return 0;
}
