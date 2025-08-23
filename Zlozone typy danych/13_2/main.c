#include <stdio.h>
#include <stdlib.h>

struct Student{
    char *firstName;
    char *lastName;
    int id;
    float gpa;
};

int main()
{
    struct Student s1 = {"Maciej", "Wojciechowski", 123456, 3.1};
    struct Student s2 = {"Patryk", "Niesmiertelny", 216341, 5.0};
    struct Student s3 = {"Andrzej", "Kara", 111111, 2.0};

    struct Student tab[3] = {s1, s2, s3};

    for(int i = 0; i < 3; i++)
    {
        printf("First name: %s\nLast name: %s\nID: %d\nGPA: %f\n\n", tab[i].firstName, tab[i].lastName, tab[i].id, tab[i].gpa);
    }

    return 0;
}
