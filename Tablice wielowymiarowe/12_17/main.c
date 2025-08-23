#include <stdio.h>
#include <stdlib.h>

void swap2nd(int n, int m, int tab[n][m])
{
    if(n < 4)
    {
        return;
    }

    int prelastR = n - 2;

    for(int j = 0; j < m; j++)
    {
        int temp = tab[1][j];
        tab[1][j] = tab[prelastR][j];
        tab[prelastR][j] = temp;
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
    int tab[4][3] = {{2,3,-3}, {1,4,7}, {-3,-6,11}, {-2,8,23}};

    printMatrix(4,3,tab);

    swap2nd(4,3,tab);

    printMatrix(4,3,tab);

    return 0;
}
