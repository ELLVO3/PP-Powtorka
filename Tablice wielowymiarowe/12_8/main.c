#include <stdio.h>
#include <stdlib.h>

void swapItems(int n, int m, int **tab1, int **tab2)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

void printMatrix(int n, int m, int **tab)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("[%d]", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int **tab1 = malloc(sizeof(int*) * 2);
    tab1[0] = malloc(sizeof(int) * 2);
    tab1[1] = malloc(sizeof(int) * 2);

    int **tab2 = malloc(sizeof(int*) * 2);
    tab2[0] = malloc(sizeof(int) * 2);
    tab2[1] = malloc(sizeof(int) * 2);


    tab1[0][0] = 1;     tab1[0][1] = 2;
    tab1[1][0] = 3;     tab1[1][1] = 4;

    tab2[0][0] = -1;    tab2[0][1] = -2;
    tab2[1][0] = -3;    tab2[1][1] = -4;

    printMatrix(2,2,tab1);
    printMatrix(2,2,tab2);

    swapItems(2,2,tab1,tab2);

    printMatrix(2,2,tab1);
    printMatrix(2,2,tab2);

    return 0;
}
