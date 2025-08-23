#include <stdio.h>
#include <stdlib.h>

struct Person{
    char name[20];
    int age;
};

struct Person *initPerson(char name[], int age)
{
    struct Person *temp = malloc(sizeof(struct Person));

    temp->age = age;

    int i;
    for(i = 0; name[i] != 0; i++)
    {
        temp->name[i] = name[i];
    }
    temp->name[i] = 0;
    return temp;
};

void showPerson(struct Person argument)
{
    printf("Name: %s\nAge: %d\n\n", argument.name, argument.age);
}

void birthday(struct Person *ptr)
{
    ptr->age++;
}

int main()
{
    struct Person *result = initPerson("Maciej", 19);

    showPerson(*result);

    birthday(result);

    showPerson(*result);

    return 0;
}
