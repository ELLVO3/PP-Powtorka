#include <stdio.h>
#include <stdlib.h>

void revColArr(int n, int m, int **tab)
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

    revColArr(3,3,tab);

    printMatrix(3,3,tab);

    return 0;
}
