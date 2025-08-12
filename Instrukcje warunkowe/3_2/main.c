#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);

    printf("\n");

    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    printf("\n");

    if(a > b)
    {
        printf("Wieksza liczba to: %d", a);
    }

    else{
        printf("Wieksza liczba to: %d", b);
    }

    return 0;
}
