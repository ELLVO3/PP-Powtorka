#include <stdio.h>
#include <stdlib.h>

// funkcja wzieta z GPT w celu nauki.

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

    int poz_bita = (a >> n) & 1;

    printf("Binarnie %d na pozycji %d (od zera) wynosi: %d", a, n, poz_bita);

    return 0;
}
