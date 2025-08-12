#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Wprowadz liczbe od 0 do 100: ");
    scanf("%d", &a);

    a < 0 || a > 100 ? printf("Zly zakres") : a > 50 ? printf("Zdane") : printf("Nie zdane");

    return 0;
}
