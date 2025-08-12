#include <stdio.h>
#include <stdlib.h>

int calculateFactorial(unsigned int n)
{
    int silnia = 1;
    int i = 1;

    for(i = 1; i <= n; i++)
    {
        silnia *= i;
    }
    return silnia;
}

int main()
{
    printf("%d\n", calculateFactorial(5));

    return 0;
}
