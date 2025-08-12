#include <stdio.h>
#include <stdlib.h>

int calculateGCD(int n, int m)
{
    if(m == 0)
    {
        return n;
    }

    else{
        return calculateGCD(m, n % m);
    }
}

int main()
{
    printf("%d\n", calculateGCD(21, 18));

    return 0;
}
