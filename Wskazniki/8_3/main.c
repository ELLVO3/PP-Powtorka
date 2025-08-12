#include <stdio.h>
#include <stdlib.h>

void copyInt(int x, int * w)
{
    *w = x;
}

int main()
{
    int a = 5;
    int b = 1;

    printf("a = %d, b = %d\n", a, b);

    copyInt(a, &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
