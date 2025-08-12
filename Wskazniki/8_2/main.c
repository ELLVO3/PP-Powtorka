#include <stdio.h>
#include <stdlib.h>

int sum(int n, int m)
{
    return n + m;
}

int sumVals(int * n, int * m)
{
    return *n + *m;
}

void addPtr(int * a, int * b, int * c)
{
    *c = *a + *b;
}

int main()
{
    int x = 5;
    int y = 10;

    printf("%d\n", sum(x, y));

    printf("%d\n", sumVals(&x, &y));

    int result;

    addPtr(&x, &y, &result);
    printf("%d\n", result);

    return 0;
}
