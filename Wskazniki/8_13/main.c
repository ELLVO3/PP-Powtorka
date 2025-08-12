#include <stdio.h>
#include <stdlib.h>

int minPtr(int *a, int *b, int *c)
{
    int min = *a;

    if(*b < min)
    {
        min = *b;
    }

    if(*c < min)
    {
        min = *c;
    }

    return min;
}

int main()
{
    int x = 9;
    int y = 5;
    int z = 4;

    int result = minPtr(&x, &y, &z);

    printf("%d\n", result);

    return 0;
}
