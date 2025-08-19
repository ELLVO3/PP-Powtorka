#include <stdio.h>
#include <stdlib.h>

void foo(int **tab, int n, int m)
{
    int suma = 0;

    for(int j = 0; j < m; j++)
    {
        suma = 0;
        for(int i = 0; i < n; i++)
        {
            suma += tab[i][j];
        }
        printf("%d\n", suma);
    }
}

int main()
{


    return 0;
}
