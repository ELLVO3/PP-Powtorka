#include <stdio.h>
#include <stdlib.h>

void revCols(int n, int m, int tab[n][m])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m/2; j++)
        {
            int temp = tab[i][j];
            tab[i][j] = tab[i][m-j-1];
            tab[i][m-j-1] = temp;
        }
    }
}

void printMatrix(int n, int m, int tab[n][m])
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
    int tab[4][3] = {{-1,-2,-3}, {1,2,3}, {9,8,7}, {-9,-7,-8}};

    printMatrix(4,3,tab);

    revCols(4,3,tab);

    printMatrix(4,3,tab);

    return 0;
}
