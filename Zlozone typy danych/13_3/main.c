#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    float width;
    float height;
    char *color;
};

int main()
{
    struct Rectangle r1 = {.20, 1.3, "red"};
    struct Rectangle r2 = {.21, 1.1, "green"};
    struct Rectangle r3 = {.22, 1.2, "blue"};
    struct Rectangle r4 = {.24, 1.4, "yellow"};

    struct Rectangle tab[4] = {r1,r2,r3,r4};

    for(int i = 0; i < 4; i++)
    {
        printf("Width: %.2f\nHeight: %.2f\nColor: %s\n\n", tab[i].width, tab[i].height, tab[i].color);
    }

    return 0;
}
