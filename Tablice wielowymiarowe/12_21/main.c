#include <stdio.h>
#include <stdlib.h>

int idxDiff(int **tab, int n, int m)
{
    int minVal = tab[0][0];
    int maxVal = tab[0][0];

    int minIdx = 0;
    int maxIdx = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int val = tab[i][j];
            int idxSum = i + j;

            if(val < minVal || (val == minVal && idxSum < minIdx))
            {
                minVal = val;
                minIdx = idxSum;
            }
            if(val > maxVal || (val == maxVal && idxSum < maxIdx))
            {
                maxVal = val;
                maxIdx = idxSum;
            }
        }
    }
    return minIdx - maxIdx;
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
    int **tab = malloc(sizeof(int*) * 4);

    for(int i = 0; i < 4; i++)
    {
        tab[i] = malloc(sizeof(int) * 4);
    }

    tab[0][0] = 1;  tab[0][1] = 2;  tab[0][2] = 3;  tab[0][3] = 4;
    tab[1][0] = 5;  tab[1][1] = 6;  tab[1][2] = 7;  tab[1][3] = 8;
    tab[2][0] = 9;  tab[2][1] = 10;  tab[2][2] = 11;  tab[2][3] = 12;
    tab[3][0] = 13;  tab[3][1] = 14;  tab[3][2] = 15;  tab[3][3] = 16;

    printMatrix(4,4,tab);

    printf("%d\n", idxDiff(tab,4,4));

    return 0;
}
