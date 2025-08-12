#include <stdio.h>
#include <stdlib.h>

int calculateFactorialRecursively(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else{
        return n * calculateFactorialRecursively(n - 1);
    }
}

int main()
{
    printf("%d\n", calculateFactorialRecursively(3));
    return 0;
}
