#include <stdio.h>
#include <stdlib.h>

void showCols(int n, int m, int **tab)
{
    for(int j = 0; j < m; j++)
    {
        for(int i = 0; i < n; i++)
        {
            printf("%d", tab[i][j]);
            if(i < n-1)
            {
                printf(",");
            }
        }
        printf("\n");
    }
}

int main()
{
    int **tab = malloc(sizeof(int*) * 4);

    for(int i = 0; i < 4; i++)
    {
        tab[i] = malloc(sizeof(int) * 3);
    }

    tab[0][0] = 1;  tab[0][1] = 2;  tab[0][2] = 3;
    tab[1][0] = 0;  tab[1][1] = -5;  tab[1][2] = 8;
    tab[2][0] = 9;  tab[2][1] = 8;  tab[2][2] = -2;
    tab[3][0] = -3;  tab[3][1] = 5;  tab[3][2] = 4;

    showCols(4,3,tab);

    return 0;
}
