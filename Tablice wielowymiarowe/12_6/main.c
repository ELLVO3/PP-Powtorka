#include <stdio.h>
#include <stdlib.h>

void copyArr2D(int n, int m, int **cel, int **zrodlo)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            zrodlo[i][j] = cel[i][j];
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
    int **zrodlo = malloc(sizeof(int*) * 2);
    zrodlo[0] = malloc(sizeof(int) * 2);
    zrodlo[1] = malloc(sizeof(int) * 2);

    int **cel = malloc(sizeof(int*) * 2);
    cel[0] = malloc(sizeof(int) * 2);
    cel[1] = malloc(sizeof(int) * 2);

    zrodlo[0][0] = 1;   zrodlo[0][1] = 2;
    zrodlo[1][0] = -3;   zrodlo[1][1] = -4;

    cel[0][0] = 0;  cel[0][1] = 0;
    cel[1][0] = 0;  cel[1][1] = 0;

    printMatrix(2,2,zrodlo);
    printMatrix(2,2,cel);

    copyArr2D(2,2,zrodlo,cel);

    printMatrix(2,2,zrodlo);
    printMatrix(2,2,cel);

    return 0;
}
