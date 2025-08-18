#include <stdio.h>
#include <stdlib.h>

void reverseArr(int n, int tab[])
{
    int temp = 0;

    for(int i = 0; i < n/2; i++)
    {
        temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
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
    int tab[] = {1,2,3,4};

    printTab(4, tab);

    reverseArr(4, tab);

    printTab(4, tab);

    return 0;
}
