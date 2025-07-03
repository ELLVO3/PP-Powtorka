#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    int a_rounded, b_rounded;

    printf("Podaj pierwsza liczbe zmiennoprzecinkowa: ");
    scanf("%f", &a);
    printf("Podaj druga liczbe zmiennoprzecinkowa: ");
    scanf("%f", &b);

    a_rounded = (int)(a * 100 + .5);
    b_rounded = (int)(b * 100 + .5);

    (a_rounded == b_rounded) ? printf("Liczby sa rowne.") : a > b ? printf("Wieksza liczba to: %.2f", a) : printf("Wieksza liczba to: %.2f", b);

    return 0;
}
