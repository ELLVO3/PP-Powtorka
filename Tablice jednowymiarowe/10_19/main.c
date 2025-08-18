#include <stdio.h>
#include <stdlib.h>

int isSymetric(int n, int *tab)
{
    for(int i = 0; i < n/2; i++)
    {
        if(tab[i] == tab[n-i-1])
        {
            return 1;
        }
    }
    return 0;
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
    int tab1[] = {1,2,3,2,1,0};
    int tab2[] = {1,2,3,2,1};

    printTab(6, tab1);

    printf("%d\n", isSymetric(6, tab1));

    printTab(5, tab2);

    printf("%d\n", isSymetric(5, tab2));
    return 0;
}
