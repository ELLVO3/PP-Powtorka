#include <stdio.h>
#include <stdlib.h>

int maxValue(int n, int *tab)
{
    int max = tab[0];

    if(n == 1)
    {
        return *tab;
    }

    for(int i = 0; i < n; i++)
    {
        if(max < tab[i])
        {
            max = tab[i];
        }
    }

    return max;

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
    int tab[] = {1,2,34,4};

    printTab(4, tab);

    printf("%d\n", maxValue(4, tab));

    return 0;
}
