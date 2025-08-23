#include <stdio.h>
#include <stdlib.h>

struct Bike{
    char model[40];
    int distance_travelled;
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

struct Bike *initBike(char model[], int distance_travelled)
{
    if(length(model) < 3 || distance_travelled <= 0)
    {
        return NULL;
    }

    struct Bike *temp = malloc(sizeof(struct Bike));

    temp->distance_travelled = distance_travelled;

    int i;
    for(i = 0; model[i] != 0; i++)
    {
        temp->model[i] = model[i];
    }
    temp->model[i] = 0;
    return temp;
};

void increaseDistance(struct Bike *ptr)
{
    ptr->distance_travelled += 500;
}

void showBike(struct Bike arg)
{
    printf("Model: %s\nDistance Travelled: %d\n\n", arg.model, arg.distance_travelled);
}

int main()
{
    struct Bike *result1 = initBike("Kross", 1000);

    if(result1 != NULL)
    {
        showBike(*result1);
        increaseDistance(result1);
        showBike(*result1);
    }

    struct Bike *result2 = initBike("Accent", 0);

    if(result2 != NULL)
    {
        showBike(*result2);
        increaseDistance(result2);
        showBike(*result2);
    }

    return 0;
}
