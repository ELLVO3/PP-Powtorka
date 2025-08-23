#include <stdio.h>
#include <stdlib.h>

struct Laptop{
    char model[30];
    float price;
};

struct Laptop initLaptop(char model[], float price)
{
    struct Laptop temp;
    temp.price = price;
    int i;
    for(i = 0; model[i] != 0; i++)
    {
        temp.model[i] = model[i];
    }
    temp.model[i] = 0;
    return temp;
};

void showLaptop(struct Laptop arg)
{
    printf("Model: %s\nPrice: %.2f\n\n", arg.model, arg.price);
}

void reducePrice(struct Laptop *ptr)
{
    ptr->price *= 0.95;
}

int main()
{
    struct Laptop result = initLaptop("HP", 1200.99);

    showLaptop(result);

    reducePrice(&result);

    showLaptop(result);

    return 0;
}
