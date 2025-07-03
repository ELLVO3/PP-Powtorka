#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, wynik;

    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe calkowita: ");
    scanf("%d", &b);

    wynik = a > b ? a : b;

    printf("Wieksza podana liczba to: %d", wynik);

    return 0;
}
