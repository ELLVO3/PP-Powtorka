#include <stdio.h>
#include <stdlib.h>

int calculateFibonacciRecursively(int n)
{
    if(n == 0)
    {
        return 0;
    }

    else if(n == 1 || n == 2)
    {
        return 1;
    }

    else{
        return calculateFibonacciRecursively(n - 2) + calculateFibonacciRecursively(n - 1);
    }
}

int main()
{
    printf("%d\n", calculateFibonacciRecursively(4));
    return 0;
}
