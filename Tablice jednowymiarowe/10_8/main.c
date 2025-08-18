#include <stdio.h>
#include <stdlib.h>

int minValue(int n, int *tab)
{
    int min = tab[0];

    if(n == 1)
    {
        return *tab;
    }

    for(int i = 0; i < n; i++)
    {
        if(min > tab[i])
        {
            min = tab[i];
        }
    }

    return min;
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
    int tab[] = {-1,0,-22,-3};

    printTab(4, tab);

    printf("%d\n", minValue(4, tab));

    return 0;
}
