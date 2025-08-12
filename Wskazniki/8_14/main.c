#include <stdio.h>
#include <stdlib.h>

double multPtrs(double const *num1, double *const num2)
{
    return *(num1) * *(num2);
}

int main()
{
    double a = 5.0;
    double b = .5;

    double result = multPtrs(&a, &b);

    printf("%lf\n", result);

    return 0;
}
