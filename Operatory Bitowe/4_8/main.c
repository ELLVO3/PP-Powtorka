#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &a);

    printf("Podaj druga liczbe calkowita: ");
    scanf("%d", &b);

    printf("XOR %d i %d to: %d", a, b, a ^ b);

    return 0;
}
