#include <stdio.h>
#include <stdlib.h>

void transpose(int n, int tab[n][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            int temp = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = temp;
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
    int tab[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printMatrix(3,3,tab);

    transpose(3,tab);

    printMatrix(3,3,tab);

    return 0;
}
