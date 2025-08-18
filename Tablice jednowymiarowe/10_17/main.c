#include <stdio.h>
#include <stdlib.h>

int equalizer(int x, int y)
{
    return x == y;
}

int findElement(int *tab, int n, int val, int (*isEqual)(int, int))
{
    for(int i = 0; i < n; i++)
    {
        if(isEqual(tab[i], val) == 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int tab[] = {3,2,-4,7,4};

    printf("%d\n", findElement(tab, 5, 4, equalizer));

    return 0;
}
