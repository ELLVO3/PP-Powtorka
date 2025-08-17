#include <stdio.h>
#include <stdlib.h>

int modifyValue(int x ,int (*modifier)())
{
    return x + modifier();
}

int square(int x)
{
    return x * x;
}

int main()
{
    printf("%d\n", modifyValue(5, square));

    return 0;
}
