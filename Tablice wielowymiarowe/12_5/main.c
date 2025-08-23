#include <stdio.h>
#include <stdlib.h>

void copyMat(int n, int m, int cel[n][m], int zrodlo[n][m])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            zrodlo[i][j] = cel[i][j];
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
    int tab1[2][2] = {{0,0}, {0,0}};
    int tab2[2][2] = {{1,2}, {3,4}};

    printMatrix(2,2,tab1);
    printMatrix(2,2,tab2);

    copyMat(2,2,tab2,tab1);

    printMatrix(2,2,tab1);
    printMatrix(2,2,tab2);

    return 0;
}
