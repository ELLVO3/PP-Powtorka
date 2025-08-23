#include <stdio.h>
#include <stdlib.h>

void revRowArr(int n, int m, int **tab)
{
    for(int i = 0; i < n/2; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int temp = tab[i][j];
            tab[i][j] = tab[n-1-i][j];
            tab[n-1-i][j] = temp;
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

    // Tutaj  troche inaczej chcialem sprobowac zarezerwowac pamiec, w dalszych zadaniach raczej bede wykonywac rezerwacje w taki sposob.

    for(int i = 0; i < 3; i++)
    {
        tab[i] = malloc(sizeof(int) * 2);
    }

    tab[0][0] = 1;  tab[0][1] = 3;
    tab[1][0] = -5;  tab[1][1] = 2;
    tab[2][0] = 7;  tab[2][1] = -9;

    printMatrix(3,2,tab);

    revRowArr(3,2,tab);

    printMatrix(3,2,tab);

    return 0;
}
