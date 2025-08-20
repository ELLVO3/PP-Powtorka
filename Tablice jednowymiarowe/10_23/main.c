#include <stdio.h>
#include <stdlib.h>

void allGoesToTab3(int n, int *tab1, int *tab2, double *tab3)
{
    for(int i = 0; i < n; i++)
    {
        tab3[i] = tab1[i] * tab2[i];
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

void printTab2(int n, double *tab)
{
    for(int i = 0; i < n; i++)
    {
        printf("[%.2f] ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab1[] = {1,2,3,4};
    int tab2[] = {2,2,2,2};
    double tab3[4] = {};

    printTab(4, tab1);
    printTab(4, tab2);

    allGoesToTab3(4, tab1, tab2, tab3);

    printTab2(4, tab3);

    return 0;
}
