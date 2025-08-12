#include <stdio.h>
#include <stdlib.h>

double subPtrs(const double *num1, double *const num2)
{
    return *num1 - *num2;
}

int main()
{
    double x = 12.1;
    double y = 7.1;

    printf("%lf\n", subPtrs(&x, &y));


    return 0;
}
