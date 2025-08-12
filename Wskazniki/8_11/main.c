#include <stdio.h>
#include <stdlib.h>

int sumSqrs(const int *num1, int *const num2)
{
    int suma = 0;
    suma = (*(num1) * *(num1)) + (*(num2) * *(num2));
    return suma;
}

int main()
{
    int x = 2;
    int y = 3;

    int result = sumSqrs(&x, &y);

    printf("%d\n", result);

    return 0;
}
