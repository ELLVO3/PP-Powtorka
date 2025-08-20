#include <stdio.h>
#include <stdlib.h>

void increaseByIndex(int n, int *tab)
{
    for(int i = 0; i < n; i++)
    {
        tab[i] += i;
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
    int tab[] = {0,1,2,5,12};

    printTab(5, tab);

    increaseByIndex(5, tab);

    printTab(5, tab);

    return 0;
}
