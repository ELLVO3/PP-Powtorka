#include <stdio.h>
#include <stdlib.h>

void revCopy(int n, int tab1[], int tab2[])
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[n-1-i];
    }
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
    int tab1[] = {1,2,3,4};
    int tab2[] = {-1,-2,-3,-4};

    printTab(4, tab1);
    printTab(4, tab2);

    revCopy(4, tab1, tab2);

    printf("\n");

    printTab(4, tab1);
    printTab(4, tab2);

    return 0;
}
