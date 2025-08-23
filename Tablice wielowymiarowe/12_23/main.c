#include <stdio.h>
#include <stdlib.h>

int **transCopy(int n, int **tab)
{
    int **temp = malloc(sizeof(int*) * n);
    for(int i = 0; i < n; i++)
    {
        temp[i] = malloc(sizeof(int) * n);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            temp[i][j] = tab[j][i];
        }
    }
    return temp;
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

    int **result = transCopy(3,tab);

    printMatrix(3,3,result);

    return 0;
}
