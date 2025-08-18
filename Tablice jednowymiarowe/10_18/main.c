#include <stdio.h>
#include <stdlib.h>

int cond(int x)
{
    return x%2 == 0;
}

int findWithCondition(int *tab, int n, int (*condition)(int))
{
    int idx = -1;

    for(int i = 0; i < n; i++)
    {
        if(condition(tab[i]) == 1)
        {
            idx = i;
        }
    }
    return idx;
}

int main()
{
    int tab[] = {1,2,3,4,5,6,7,8};

    printf("%d\n", findWithCondition(tab, 8, cond));

    return 0;
}
