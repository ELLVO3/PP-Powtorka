#include <stdio.h>
#include <stdlib.h>

void revOddCol(int n, int m, int tab[n][m])
{
    for(int j = 0; j < m; j++) // przejscie po wszystkich kolumnach
    {
        if(j%2 != 0) // sprawdzenie czy indeks kolumny jest nieparzysty
        {
            for(int i = 0; i < n/2; i++) // zaglowanie wierszami
            {
                int temp = tab[i][j];
                tab[i][j] = tab[n-1-i][j];
                tab[n-1-i][j] = temp;
            }
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
    int tab[4][3] = {{2,3,-3}, {1,4,7}, {-3,-6,11}, {-2,8,23}};

    printMatrix(4,3,tab);

    revOddCol(4,3,tab);

    printMatrix(4,3,tab);

    return 0;
}
