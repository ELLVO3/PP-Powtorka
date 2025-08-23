#include <stdio.h>
#include <stdlib.h>

int *newArrOneD(int n, int m, int **tab)
{
    int *tab1D = malloc(sizeof(int) * n * m);

    int k = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            tab1D[k++] = tab[i][j];
        }
    }
    return tab1D;
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
    int **tab = malloc(sizeof(int*) * 3);

    for(int i = 0; i < 3; i++)
    {
        tab[i] = malloc(sizeof(int) * 3);
    }

    tab[0][0] = 1;  tab[0][1] = 2;  tab[0][2] = 3;
    tab[1][0] = 4;  tab[1][1] = 5;  tab[1][2] = 6;
    tab[2][0] = 7;  tab[2][1] = 8;  tab[2][2] = 9;

    printMatrix(3,3,tab);

    int *result = newArrOneD(3,3,tab);

    for(int i = 0; i < 3 * 3; i++)
    {
        printf("[%d]", result[i]);
    }

    return 0;
}
