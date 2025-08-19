#include <stdio.h>
#include <stdlib.h>

int checkMagicSquare(int **tab, int n, int m)
{
    if(n != m)
    {
        return 0;
    }

    int suma = 0;

    for(int j = 0; j < n; j++)
    {
        suma += tab[0][j];
    }

    int suma2 = 0;

    for(int i = 0; i < n; i++)
    {
        suma2 = 0;
        for(int j = 0; j < n; j++)
        {
            suma2 += tab[i][j];
        }
        if(suma != suma2)
        {
            return 0;
        }
    }

    // sumy po kolumnach

    for(int j = 0; j < n; j++)
    {
        suma2 = 0;
        for(int i = 0; i < n; i++)
        {
            suma2 += tab[i][j];
        }
        if(suma != suma2)
        {
            return 0;
        }
    }

    //glowna przekatna


    for(int i = 0; i < n; i++)
    {
        suma2 = 0;
        suma2 += tab[i][i];
    }
    if(suma != suma2)
    {
        return 0;
    }

    // druga przekatna

    suma2 = 0;
    for(int i = 0; i < n; i++)
    {
        suma2 += tab[i][n-1-i];
    }
    if(suma != suma2)
    {
        return 0;
    }

    return 1;

}

int main()
{
    int **tab = malloc(sizeof(int*) * 3);

    tab[0] = malloc(sizeof(int) * 3);
    tab[1] = malloc(sizeof(int) * 3);
    tab[2] = malloc(sizeof(int) * 3);

    tab[0][0] = 2;  tab[0][1] = 7;  tab[0][2] = 6;
    tab[1][0] = 9;  tab[1][1] = 5;  tab[1][2] = 1;
    tab[2][0] = 4;  tab[2][1] = 3;  tab[2][2] = 8;

    printf("%d\n", checkMagicSquare(tab, 3, 3));

    return 0;
}
