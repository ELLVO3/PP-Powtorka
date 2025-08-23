#include <stdio.h>
#include <stdlib.h>

int maxRowIdx(int n, int m, int tab[n][m])
{
    int max = tab[0][0];

    int rowIdx = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(tab[i][j] > max)
            {
                max = tab[i][j];
                rowIdx = i;
            }
        }
    }
    return rowIdx;
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
    int tab[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {-1,-1,-2}};

    printMatrix(4,3,tab);

    printf("%d\n", maxRowIdx(4,3,tab));

    return 0;
}
