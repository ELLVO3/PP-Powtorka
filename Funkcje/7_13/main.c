#include <stdio.h>
#include <stdlib.h>

int calculate13(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else{
        return (2 * calculate13(n - 1)) + 3;
    }
}

int main()
{
    printf("%d\n", calculate13(3));
    return 0;
}
