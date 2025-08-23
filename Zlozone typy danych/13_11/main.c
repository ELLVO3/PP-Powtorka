#include <stdio.h>
#include <stdlib.h>

struct Computer{
    char *brand;
    int number_of_cores;
};

int maxCores(struct Computer tab[], int n)
{
    int temp = tab[0].number_of_cores;

    for(int i = 0; i < n; i++)
    {
        if(tab[i].number_of_cores > temp)
        {
            temp = tab[i].number_of_cores;
        }
    }
    return temp;
}

int main()
{
    struct Computer computers[2] = {{"My_PC", 6}, {"Friend's_PC", 8}};

    printf("%d\n", maxCores(computers, 2));

    return 0;
}
