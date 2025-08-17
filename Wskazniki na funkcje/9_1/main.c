#include <stdio.h>
#include <stdlib.h>

int calculate(int (*operation)(int), int number)
{
    return operation(number);
}

int square(int x)
{
    return x * x;
}

int main()
{
    printf("%d\n", calculate(square, -3));

    return 0;
}
