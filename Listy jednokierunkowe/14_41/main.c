#include <stdio.h>
#include <stdlib.h>

struct node {
    int x;
    struct node * next;
};

int howMuch(struct node *list, int d)
{
    int counter = 0;

    if(list->next == NULL)
    {
        return 0;
    }

    struct node *temp = list->next;

    while(temp != NULL)
    {
        if(temp->x == d)
        {
            counter++;
        }
        temp = temp->next;
    }
    return counter;
}

void printList(struct node *list)
{
    if(list->next == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }

    struct node *ptr = list->next;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct node *list = malloc(sizeof(struct node));
    list->next = malloc(sizeof(struct node));

    list->next->x = 3;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->x = 4;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->x = 3;
    list->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->x = 2;
    list->next->next->next->next->next = NULL;

    printList(list);

    printf("%d\n", howMuch(list, 2));
    printf("%d\n", howMuch(list, 3));
    printf("%d\n", howMuch(list, 4));
    printf("%d\n", howMuch(list, 5));

    return 0;
}
