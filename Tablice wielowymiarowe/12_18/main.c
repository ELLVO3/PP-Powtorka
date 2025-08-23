#include <stdio.h>
#include <stdlib.h>

void flipDiag(int n, int m, int tab[n][m])
{
    if(n != m)
    {
        return;
    }

    for(int i = 0; i < n/2; i++)
    {
        int temp = tab[i][i];
        tab[i][i] = tab[n-1-i][n-1-i];
        tab[n-1-i][n-1-i] = temp;
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
    int tab[3][3] = {{2,3,-3}, {1,4,7}, {-3,-6,11}};

    printMatrix(3,3,tab);

    flipDiag(3,3,tab);

    printMatrix(3,3,tab);

    return 0;
}
