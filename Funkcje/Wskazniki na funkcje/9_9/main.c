#include <stdio.h>
#include <stdlib.h>

int podloga(double a)
{
    int ac = (int)a;

    if(a < 0 && a != ac)
    {
        return ac - 1;
    }
    return ac;
}

int processPair(int x, int y, double (*processor)(int, int))
{
    return podloga(processor(x, y));
}

double avrg(int x, int y)
{
    return (x + y) / 2.0;
}

int main()
{
    printf("%d\n", processPair(5, 9, avrg));

    return 0;
}
