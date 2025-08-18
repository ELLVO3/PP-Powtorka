#include <stdio.h>
#include <stdlib.h>

int * shiftRight(int n, int *tab)
{
    int *temp = malloc(sizeof(int) * n);

    int last = *(tab+n-1);

    for(int i = n-1; i > 0; i--)
    {
        *(temp+i) = *(tab+i-1);
    }

    *temp = last;

    return temp;
}

void printTab(int n, int *tab)
{
    for(int i = 0; i < n; i++)
    {
        printf("[%d] ", *(tab+i));
    }
    printf("\n");
}

int main()
{
    int *tab = malloc(sizeof(int) * 4);

    *tab = 3;
    *(tab+1) = -2;
    *(tab+2) = -5;
    *(tab+3) = 7;

    printf("before\n");

    printTab(4, tab);

    int *result = shiftRight(4, tab);

    printf("after\n");
    printTab(4, result);

    return 0;
}
