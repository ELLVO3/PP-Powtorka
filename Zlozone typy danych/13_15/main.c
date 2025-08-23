#include <stdio.h>
#include <stdlib.h>

struct Computer{
    char manufracturer[30];
    int usage_hours;
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

struct Computer *initComputer(char manufracturer[], int usage_hours)
{
    if(length(manufracturer) < 2 || usage_hours <= 0)
    {
        return NULL;
    }

    struct Computer *temp = malloc(sizeof(struct Computer));

    temp->usage_hours = usage_hours;

    int i;
    for(i = 0; manufracturer[i] != 0; i++)
    {
        temp->manufracturer[i] = manufracturer[i];
    }
    temp->manufracturer[i] = 0;
    return temp;
};

void increaseUsage(struct Computer *ptr)
{
    ptr->usage_hours += 100;
}

void showComputer(struct Computer arg)
{
    printf("Manufracturer: %s\nUsage Hours: %d\n\n", arg.manufracturer, arg.usage_hours);
}

int main()
{
    struct Computer *result = initComputer("HP", 1400);

    if(result != NULL)
    {
        showComputer(*result);
        increaseUsage(result);
        showComputer(*result);
    }
    return 0;
}
