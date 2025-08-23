#include <stdio.h>
#include <stdlib.h>

void showRows(int n, int m, int tab[n][m])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d", tab[i][j]);
            if(j < m-1)
            {
                printf(",");
            }
        }
        printf("\n");
    }
}

int main()
{
    int tab[4][3] = {{1,2,3}, {0,-5,8}, {9,8,-2}, {-3,5,4}};

    showRows(4,3,tab);

    return 0;
}
