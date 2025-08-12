#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &a);

    a%2 == 0 ? printf("Parzysta") : printf("Nieparzysta");

    return 0;
}
