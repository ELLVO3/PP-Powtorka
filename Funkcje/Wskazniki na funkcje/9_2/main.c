#include <stdio.h>
#include <stdlib.h>

void applyFunction(int (*func)(int), int start, int end)
{
    for(int i = start; i <= end; i++)
    {
        printf("%d\n", func(i));
    }
}

int square(int x)
{
    return x * x;
}

int main()
{
    applyFunction(square, -2, 6);

    return 0;
}
