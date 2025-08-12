#include <stdio.h>
#include <stdlib.h>

float linFuncVal(const float *a, float *const b, const float *x)
{
    return *(a) * *(x) + *(b);
}

int main()
{
    float a = 3.0;
    float b = 4.0;
    float x = 3.3;

    float result = linFuncVal(&a, &b, &x);

    printf("%f\n", result);

    return 0;
}
