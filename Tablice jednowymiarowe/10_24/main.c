#include <stdio.h>
#include <stdlib.h>

int sumOddIndices(int n, int *tab)
{
    int suma = 0;

    int i;

    for(i = 0; i < n; i++)
    {
        if(i%2 != 0)
        {
            suma += tab[i];
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
    int tab[] = {1,2,3,4,5,4};

    printTab(6, tab);

    printf("%d\n", sumOddIndices(6, tab));

    return 0;
}
