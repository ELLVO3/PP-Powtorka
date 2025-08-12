#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &n);

    printf("Podaj druga liczbe: ");
    scanf("%d", &m);

    int suma = n + m;

    if(suma %2 == 0)
    {
        printf("Suma podanych liczb jest parzysta");
    }

    else{
        printf("Suma podanych liczb jest nieparzysta");
    }

    return 0;
}
