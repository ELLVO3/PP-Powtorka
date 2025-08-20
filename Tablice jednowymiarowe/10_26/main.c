#include <stdio.h>
#include <stdlib.h>

void doubleOddElements(int n, int *tab)
{
    for(int i = 0; i < n; i++)
    {
        if(i%2 != 0)
        {
            tab[i] *= 2;
        }
    }
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
    int tab[] = {1,2,3,4,5,6,7};

    printTab(7, tab);

    doubleOddElements(7, tab);

    printTab(7, tab);

    return 0;
}
