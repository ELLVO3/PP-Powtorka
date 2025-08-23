#include <stdio.h>
#include <stdlib.h>

struct Car{
    char *brand;
    char model[20];
    int year;
    int isAvaliable;
};

int main()
{
    struct Car s1 = {"Audi", "A6C5", 2003, 0};

    printf("%s\n", s1.brand);
    printf("%s\n", s1.model);
    printf("%d\n", s1.year);
    printf("%d\n", s1.isAvaliable);

    return 0;
}
