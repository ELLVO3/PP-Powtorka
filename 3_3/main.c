#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Wpisz liczbe w skali od 1 do 5: ");
    scanf("%d", &a);

    if(a == 1)
    {
        printf("niedostateczny");
    }

    else if(a == 2)
    {
        printf("dopuszczajacy");
    }

    else if(a == 3)
    {
        printf("dostateczny");
    }

    else if(a == 4)
    {
        printf("dobry");
    }

    else if(a == 5)
    {
        printf("bardzo dobry");
    }

    else
    {
        printf("Ocena poza skala");
    }

    return 0;
}
