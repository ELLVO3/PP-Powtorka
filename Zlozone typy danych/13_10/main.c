#include <stdio.h>
#include <stdlib.h>

struct Airplane{
    char *model;
    int number_of_engines;
};

int minEngineCount(struct Airplane tab[], int n)
{
    int temp = tab[0].number_of_engines;

    for(int i = 0; i < n; i++)
    {
        if(tab[i].number_of_engines < temp)
        {
            temp = tab[i].number_of_engines;
        }
    }
    return temp;
}

int main()
{
    struct Airplane airplanes[2] = {{"LOT", 4}, {"Indian_Flights", 5}};

    printf("%d\n", minEngineCount(airplanes, 2));

    return 0;
}
