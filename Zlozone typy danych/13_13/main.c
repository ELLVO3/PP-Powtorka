#include <stdio.h>
#include <stdlib.h>

struct Car{
    char brand[50];
    int mileage;
};

int length(char *txt)
{
    int i = 0;
    while(txt[i] != 0)
    {
        i++;
    }
    return i;
}

struct Car *initCar(char brand[], int mileage)
{
    if(length(brand) <= 1 || mileage <= 0)
    {
        return NULL;
    }

    struct Car *temp = malloc(sizeof(struct Car));

    temp->mileage = mileage;

    int i;
    for(i = 0; brand[i] != 0; i++)
    {
        temp->brand[i] = brand[i];
    }
    temp->brand[i] = 0;
    return temp;
};

void increaseMileage(struct Car *ptr)
{
    ptr->mileage += 1000;
}

void showCar(struct Car arg)
{
    printf("Brand: %s\nMileage: %d\n\n", arg.brand, arg.mileage);
}

int main()
{
    struct Car *result1 = initCar("Audi", 420000);

    if(result1 != NULL)
    {
        showCar(*result1);

        increaseMileage(result1);

        showCar(*result1);
    }

    struct Car *result2 = initCar("Fiat", 0);

    if(result2 != NULL)
    {
        showCar(*result2);

        increaseMileage(result2);

        showCar(*result2);
    }

    else{
        printf("Dane dla samochodu sa za male.\n");
    }

    return 0;
}
