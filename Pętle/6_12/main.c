#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Podaj pierwsza liczbe naturalna: ");
    scanf("%d", &a);

    printf("Podaj druga liczbe naturalna: ");
    scanf("%d", &b);

    while(a != b)
    {
        if(a > b)
        {
            a = a - b;
        }
        else{
            b = b - a;
        }
    }

    printf("NWD = %d", a);

    return 0;
}
