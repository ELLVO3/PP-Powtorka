#include <stdio.h>
#include <stdlib.h>

int minColIdx(int n, int m, int **tab)
{
    int min = tab[0][0];

    int colIdx = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(min < tab[i][j])
            {
                min = tab[i][j];
                colIdx = j;
            }
        }
    }
    return colIdx;
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
    int **tab = malloc(sizeof(int*) * 2);
    tab[0] = malloc(sizeof(int) * 2);
    tab[1] = malloc(sizeof(int) * 2);

    tab[0][0] = -1; tab[0][1] = 3;
    tab[1][0] = 27; tab[1][1] = 13;

    printMatrix(2,2,tab);

    printf("%d\n", minColIdx(2,2,tab));

    return 0;
}
