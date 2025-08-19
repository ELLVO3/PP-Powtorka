#include <stdio.h>
#include <stdlib.h>

int multiplyEdgeOdd(int **tab, int n, int m)
{
    int iloczyn = 1;

    // wiersz o indeksie 0

    for(int j = 0; j < m; j++)
    {
        if(tab[0][j] %2 != 0)
        {
            iloczyn *= tab[0][j];
        }
    }

    // ostatnia kolumna (index j jako m-1)

    for(int i = 1; i < n; i++)
    {
        if(tab[i][m-1] % 2 != 0)
        {
            iloczyn *= tab[i][m-1];
        }
    }

    //ostatni wiersz (index i = n-1)

    for(int j = 0; j < m-1; j++)
    {
        if(tab[n-1][j] % 2 != 0)
        {
            iloczyn *= tab[n-1][j];
        }
    }

    // poczatkowa kolumna (index j = 0)

    for(int i = 1; i < n-1; i++)
    {
        if(tab[i][0] % 2 != 0)
        {
            iloczyn *= tab[i][0];
        }
    }

    return iloczyn;

}

int main()
{
    int **tab = malloc(sizeof(int*) * 3);

    tab[0] = malloc(sizeof(int) * 4);
    tab[1] = malloc(sizeof(int) * 4);
    tab[2] = malloc(sizeof(int) * 4);

    tab[0][0] = 3;  tab[0][1] = 4;  tab[0][2] = 6;  tab[0][3] = 7;
    tab[1][0] = 5;  tab[1][1] = 2;  tab[1][2] = 8;  tab[1][3] = 10;
    tab[2][0] = 1;  tab[2][1] = 9;  tab[2][2] = 4;  tab[2][3] = 2;

    printf("%d\n", multiplyEdgeOdd(tab, 3, 4));

    return 0;
}
