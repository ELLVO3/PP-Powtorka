#include <stdio.h>
#include <stdlib.h>

int minIdxMax(int n, int *tab)
{
    int idx = 0;

    for(int i = 0; i < n; i++)
    {
        if(tab[i] <= tab[idx])
        {
            idx = i;
        }
    }
    return idx;
}

void printTab(int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        printf("[%d] ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab[] = {-1,3,4,0,0,-1};

    printTab(6, tab);

    printf("%d\n", minIdxMax(6, tab));

    return 0;
}
