#include <stdio.h>
#include <stdlib.h>

void shiftRight2(int n, int *tab)
{
    int last1 = tab[n-2];
    int last2 = tab[n-1];

    for(int i = n-1; i >= 2; i--)
    {
        tab[i] = tab[i-2];
    }

    tab[0] = last1;
    tab[1] = last2;

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
    int tab[] = {1,2,3,4,5};

    printTab(5, tab);

    shiftRight2(5, tab);

    printTab(5, tab);

    return 0;
}
