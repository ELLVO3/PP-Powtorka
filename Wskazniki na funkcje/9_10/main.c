#include <stdio.h>
#include <stdlib.h>

int transformLoop(int (*transform)(int), int start, int iterations)
{
    int result = start;

    for(int i = 0; i < iterations; i++)
    {
        result = transform(result);
    }

    return result;
}

int minusOne(int a)
{
    return a - 1;
}

int main()
{
    printf("%d\n", transformLoop(minusOne, 0, 5));

    return 0;
}
