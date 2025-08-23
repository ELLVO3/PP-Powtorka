#include <stdio.h>
#include <stdlib.h>

struct Apartament{
    char address[100];
    int number_of_residents;
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

struct Apartament *initApartament(char address[], int number_of_residents)
{
    if(length(address) < 5 && number_of_residents <= 0)
    {
        return NULL;
    }

    struct Apartament *temp = malloc(sizeof(struct Apartament));

    temp->number_of_residents = number_of_residents;

    int i;
    for(i = 0; address[i] != 0; i++)
    {
        temp->address[i] = address[i];
    }
    temp->address[i] = 0;
    return temp;
};

void increaseResidents(struct Apartament *ptr)
{
    ptr->number_of_residents += 2;
}

void showApartament(struct Apartament arg)
{
    printf("Address: %s\nNumber of Residents: %d\n\n", arg.address, arg.number_of_residents);
}

int main()
{
    struct Apartament *result = initApartament("Sloneczna 54", 650);

    if(result != NULL)
    {
        showApartament(*result);
        increaseResidents(result);
        showApartament(*result);
    }
    return 0;
}
