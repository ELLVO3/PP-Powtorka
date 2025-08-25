#include <stdio.h>
#include <stdlib.h>

struct node {
    double x;
    struct node * next;
};

double returnLowest(struct node *list)
{
    if(list == NULL)
    {
        return 0;
    }

    double min = list->x;

    while(list != NULL)
    {
        if(list->x < min)
        {
            min = list->x;
        }
        list = list->next;
    }
    return min;
}

void printList(struct node *list)
{
    struct node *ptr = list;

    while(ptr != NULL)
    {
        printf("%.2lf\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct node *list = malloc(sizeof(struct node));

    list->x = 3;
    list->next = malloc(sizeof(struct node));
    list->next->x = -2;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->x = 4;
    list->next->next->next = NULL;

    printList(list);

    printf("%.2lf", returnLowest(list));

    return 0;
}
