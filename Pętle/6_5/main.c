#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int a = 0;
    int b = 1;
    int temp = 0;

    while(i < 10){
        printf("%d\n", a);
        temp = a + b;
        a = b;
        b = temp;
        i++;
    }

    return 0;
}
