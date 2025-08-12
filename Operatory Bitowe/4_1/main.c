#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5; // 0101 - binary
    int b = 3; // 0011 - binary

    printf("a = %d, b = %d\n", a, b);

    a = a ^ b;

    /*------

        0101
    ^   0011
    --------
    a = 0110 = 6 - decimal

    ------*/

    b = a ^ b;

    /*------

        0110
    ^   0011
    --------
    b = 0101 = 5 - decimal

    ------*/

    a = a ^ b;

    /*------

        0110
    ^   0101
    --------
    a = 0011 = 3 - decimal

    ------*/

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
