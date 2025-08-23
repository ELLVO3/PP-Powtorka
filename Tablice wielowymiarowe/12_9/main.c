#include <stdio.h>
#include <stdlib.h>

void revRows(int n, int m, int tab[n][m])
{
    for(int i = 0; i < n/2; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int temp = tab[i][j];
            tab[i][j] = tab[n-1-i][j];
            tab[n-1-i][j] = temp;
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
    int tab[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    printMatrix(3,3,tab);

    revRows(3,3,tab);

    printMatrix(3,3,tab);

    return 0;
}
