#include <stdio.h>
#include <stdlib.h>

double findMax(double const * num1, const double * num2)
{
    if(*num1 > *num2)
    {
        return *num1;
    }
    else{
        return *num2;
    }
}

int main()
{
    double a = 4.3;
    double b = -5.1;

    printf("%lf\n", findMax(&a, &b));

    return 0;
}
