#include <stdio.h>
#include <stdlib.h>

int countPositiveElements(int n, int *tab)
{
    int suma = 0;

    for(int i = 0; i < n; i++)
    {
        if(tab[i] > 0)
        {
            suma++;
        }
    }
    return suma;
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
    int tab[] = {3, -4, 5};

    printTab(3, tab);

    printf("%d\n", countPositiveElements(3, tab));

    return 0;
}
