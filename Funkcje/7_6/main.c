#include <stdio.h>
#include <stdlib.h>

int calculatePowerOfTwo(int n)
{
    int a = 1;

    for(int i = 0; i < n; i++)
    {
        a *= 2;
    }
    return a;
}

int main()
{
    printf("%d\n", calculatePowerOfTwo(3));
    printf("%d\n", calculatePowerOfTwo(4));
    printf("%d\n", calculatePowerOfTwo(5));
    printf("%d\n", calculatePowerOfTwo(1));
    printf("%d\n", calculatePowerOfTwo(0));

    return 0;
}
