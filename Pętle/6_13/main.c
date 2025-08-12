#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int temp = 0;

    printf("Podaj pierwsza liczbe naturalna: ");
    scanf("%d", &a);

    printf("Podaj druga liczbe naturalna: ");
    scanf("%d", &b);

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("NWD = %d", a);

    return 0;
}
