#include <stdio.h>
#include <stdlib.h>

int largestAbs(int n, int *tab)
{
    int idx = 0;
    int maxabs = tab[0];

    if(tab[0] < 0)
    {
        maxabs = -tab[0];
    }

    else{
        maxabs = tab[0];
    }

    for(int i = 0; i < n; i++)
    {
        int x = 0;

        if(tab[i] < 0)
        {
            x = -tab[i];
        }
        else{
            x = tab[i];
        }

        if(x > maxabs)
        {
            maxabs = x;
            idx = i;
        }

    }
    return idx;
}

void printTab(int n, int *tab)
{
    for(int i = 0; i < n; i++)
    {
        printf("[%d] ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab[] = {1,2,33,-34,-55, 54, -55};

    printTab(7, tab);

    printf("%d\n", largestAbs(7, tab));

    return 0;
}
