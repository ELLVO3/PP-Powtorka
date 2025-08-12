#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i = 1;

    printf("Wczytaj liczbe naturalna: ");
    scanf("%d", &n);

    while(i * i <= n)
    {
        i++;
    }

    int sqrt = i - 1;

    int dzielnik = 0;

    for(int j = 2; j <= sqrt; j++)
    {
        if(n % j == 0)
        {
            dzielnik = 1;
            break;
        }
    }

    if(dzielnik != 0)
    {
        printf("Liczba %d nie jest liczba pierwsza.", n);
    }
    else{
        printf("Liczba %d jest liczba pierwsza.", n);
    }

    return 0;
}
