#include <stdio.h>
#include <stdlib.h>

float calculateAbsoluteValue(float n)
{
    if(n < 0){
        return n * -1;
    }
    return n;
}

int main()
{
    printf("%f\n", calculateAbsoluteValue(-2.1));
    return 0;
}
