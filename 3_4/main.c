#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Wprowadz pierwsza liczbe calkowita: ");
    scanf("%d", &a);

    printf("Wprowadz druga liczbe calkowita: ");
    scanf("%d", &b);


    printf("Wprowadz trzecia liczbe calkowita: ");
    scanf("%d", &c);


    if(a < b)
    {
        if(a > c)
        {
            printf("%d", c);
        }

        else{
            printf("%d", a);
        }
    }

    else
    {
        if(b > c)
        {
            printf("%d", c);
        }

        else{
            printf("%d", b);
        }
    }

    return 0;
}
