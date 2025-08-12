#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &a);

    int zanegowana = ~a;

    printf("Odwrocona liczba to: %d", zanegowana);

    return 0;
}
