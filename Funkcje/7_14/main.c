#include <stdio.h>
#include <stdlib.h>

int calculate14(int n)
{
    if(n == 1)
    {
        return 2;
    }
    else{
        return (3 * calculate14(n - 1)) - 1;
    }
}

int main()
{
    printf("%d\n", calculate14(3));
    return 0;
}
