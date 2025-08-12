#include <stdio.h>
#include <stdlib.h>

int sumTwoNumbers(int a, int b)
{
    int suma = 0;

    suma = a + b;

    return suma;
}

int main()
{
    printf("%d\n", sumTwoNumbers(5, 2));

    return 0;
}
