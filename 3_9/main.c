#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, min;

    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe calkowita: ");
    scanf("%d", &b);

    min = a > b ? b : a;

    printf("Mniejsza podana liczba to: %d", min);

    return 0;
}
