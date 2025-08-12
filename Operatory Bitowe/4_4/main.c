#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned int x) {
    int i;
    for (i = sizeof(x) * 8 - 1; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int a = 42;
    int n = 3;

    print_binary(a);

    a = a & ~(1 << n);

    printf("%d\n", a);

    print_binary(a);

    return 0;
}
