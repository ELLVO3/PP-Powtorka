#include <stdio.h>
#include <stdlib.h>

int maxIdx(int n, int *tab)
{
    int idx = 0;

    int max = tab[0];

    for(int i = 0; i < n; i++)
    {
        if(max < tab[i])
        {
            max = tab[i];
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
    int tab[] = {1,2,3,4,5,6,9,9,8};

    printTab(9, tab);

    printf("Idx: %d\n", maxIdx(9, tab));

    return 0;
}
