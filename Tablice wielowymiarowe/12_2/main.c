#include <stdio.h>
#include <stdlib.h>

int sumArray(int n, int m, int **tab)
{
    int suma = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            suma += tab[i][j];
        }
    }
    return suma;
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
    int **tab = malloc(sizeof(int*) * 2);  // alokacja 2 wskaŸników (na wiersze), czyli 2 kolumny
    tab[0] = malloc(sizeof(int) * 4);      // wiersz 0 ma 4 elementy
    tab[1] = malloc(sizeof(int) * 4);      // wiersz 1 ma 4 elementy

    tab[0][0] = 1;  tab[0][1] = 2;  tab[0][2] = 9;  tab[0][3] = 8;
    tab[1][0] = 3;  tab[1][1] = 4;  tab[1][2] = -9; tab[1][3] = 4;

    printMatrix(2, 4, tab);

    printf("%d\n", sumArray(2, 4, tab));

    return 0;
}
