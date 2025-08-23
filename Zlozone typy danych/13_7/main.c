#include <stdio.h>
#include <stdlib.h>

struct Car{
    char brand[20];
    int mileage;
};

struct Car initCar(char brand[], int mileage)
{
    struct Car temp;

    temp.mileage = mileage;

    int i;
    for(i = 0; brand[i] != 0; i++)
    {
        temp.brand[i] = brand[i];
    }
    temp.brand[i] = 0;
    return temp;
};

void showCar(struct Car arg)
{
    printf("Brand: %s\nMileage: %d\n\n", arg.brand, arg.mileage);
}

void mileageService(struct Car *ptr)
{
    ptr->mileage += 10000;
}

int main()
{
    struct Car result = initCar("Audi", 420000);

    showCar(result);

    mileageService(&result);

    showCar(result);

    return 0;
}
