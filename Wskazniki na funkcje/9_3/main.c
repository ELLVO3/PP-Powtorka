#include <stdio.h>
#include <stdlib.h>

int foo(int (*x)(int), int (*y)(int), int n)
{
    if(n <= 0)
    {
        exit(-1);
    }

    for(int i = 0; i <= n; i++)
    {
        if(x(i) * y(i) <= 0)
        {
            return 0;
        }
    }

    return 1;
}

int f1(int a)
{
    return a*2;
}

int f2(int b)
{
    return b*5;
}

int main()
{
    printf("%d\n", foo(f1, f2, 1));

    return 0;
}
