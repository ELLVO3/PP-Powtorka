#include <stdio.h>
#include <stdlib.h>

void shiftLeft(int n, float *tab)
{
    int temp = tab[0];

    for(int i = 0; i < n-1; i++)
    {
        tab[i] = tab[i+1];
    }

    tab[n-1] = temp;
}

void printTab(int n, float tab[])
{
    for(int i = 0; i < n; i++)
    {
        printf("[%.2f] ", tab[i]);
    }
    printf("\n");
}

int main()
{
    float tab[] = {1.0, 2.0, 3.0, 4.0, 5.0};

    printTab(5, tab);

    shiftLeft(5, tab);

    printTab(5, tab);

    return 0;
}
