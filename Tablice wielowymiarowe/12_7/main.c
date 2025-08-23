#include <stdio.h>
#include <stdlib.h>

void swapElems(int n, int m, int tab1[n][m], int tab2[n][m])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
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
    int tab1[2][2] = {{1,2}, {3,4}};
    int tab2[2][2] = {{9,8}, {7,6}};

    printMatrix(2,2,tab1);
    printMatrix(2,2,tab2);

    swapElems(2,2,tab1,tab2);

    printMatrix(2,2,tab1);
    printMatrix(2,2,tab2);

    return 0;
}
