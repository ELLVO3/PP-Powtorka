#include <stdio.h>
#include <stdlib.h>

void shiftAllLeft2(int n, double *tab)
{
    if(n <= 3)
    {
        return;
    }

    double first = tab[0];
    double second = tab[1];

    for(int i = 0; i < n-2; i++)
    {
        tab[i] = tab[i+2];
    }

    tab[n - 2] = first;
    tab[n - 1] = second;
}

void printTab(int n, double *tab)
{
    for(int i = 0; i < n; i++)
    {
        printf("[%.2f] ", tab[i]);
    }
    printf("\n");
}

int main()
{
    double tab[] = {1.2, 3.4, -9.1, 3.2, .8};

    printf("Przed przesunieciem:\n");

    printTab(5, tab);

    shiftAllLeft2(5, tab);

    printf("Po przesunieciu wszystkich elementow o 2 w lewo:\n");

    printTab(5, tab);

    return 0;
}
