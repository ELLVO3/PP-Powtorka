#include <stdio.h>
#include <stdlib.h>

void swapSign(double *wsk1, double *wsk2)
{
    double temp;

    if(*wsk1 < 0 && *wsk2 > 0)
    {
        temp = *wsk1;
        *wsk1 = *wsk2;
        *wsk2 = temp;
    }

    else if(*wsk1 > 0 && *wsk2 < 0)
    {
        temp = *wsk1;
        *wsk1 = *wsk2;
        *wsk2 = temp;
    }
}

int main()
{
    double x = 4.1;
    double y = -7.1;

    printf("Przed zamiana: %lf, %lf\n", x, y);

    swapSign(&x, &y);

    printf("Po zamianie: %lf, %lf\n", x, y);

    return 0;
}
