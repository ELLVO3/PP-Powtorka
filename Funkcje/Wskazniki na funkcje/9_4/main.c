#include <stdio.h>
#include <stdlib.h>

double calculateOperation(double (*operation)(double, double), double number1, double number2)
{
    return operation(number1, number2);
}

double sum(double a, double b)
{
    return a + b;
}

int main()
{
    printf("%lf\n", calculateOperation(sum, 7.1, .9));

    return 0;
}
