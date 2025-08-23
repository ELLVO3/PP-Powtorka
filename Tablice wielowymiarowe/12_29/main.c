#include <stdio.h>
#include <stdlib.h>

void snkPrint(int n, int m, int **tab)
{
    int gora = 0;
    int dol = n - 1;

    int lewo = 0;
    int prawo = m - 1;

    while(gora <= dol && lewo <= prawo)
    {
        for(int j = lewo; j <= prawo; j++)
        {
            printf("%d ", tab[gora][j]);
        }
        gora++;

        for(int i = gora; i <= dol; i++)
        {
            printf("%d ", tab[i][prawo]);
        }
        prawo--;

        if(gora <= dol)
        {
            for(int j = prawo; j >= lewo; j--)
            {
                printf("%d ", tab[dol][j]);
            }
            dol--;
        }

        if(lewo <= prawo)
        {
            for(int i = dol; i >= gora; i--)
            {
                printf("%d ", tab[i][lewo]);
            }
            lewo++;
        }
    }
    printf("\n");
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

    snkPrint(4,3,tab);

    return 0;
}
