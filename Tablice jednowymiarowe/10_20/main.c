#include <stdio.h>
#include <stdlib.h>

int areTheyTheSame(int n, int *tab1, int *tab2)
{
    for(int i = 0; i < n; i++)
    {
        if(tab1[i] != tab2[i])
        {
            return 0;
        }
    }
    return 1;
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
    int tab1[] = {1,2,3};
    int tab2[] = {1,2,4};

    printTab(3, tab1);
    printTab(3, tab2);

    printf("%d\n", areTheyTheSame(3, tab1, tab2));

    printf("\n");

    int tab3[] = {1,2,3};
    int tab4[] = {1,2,3};

    printTab(3, tab3);
    printTab(3, tab4);

    printf("%d\n", areTheyTheSame(3, tab3, tab4));

    return 0;
}
