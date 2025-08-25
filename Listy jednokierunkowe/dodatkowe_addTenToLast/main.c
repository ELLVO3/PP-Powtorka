#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

void addTenToLast(struct node *list)
{
    if(list->next == NULL)
    {
        return;
    }

    struct node *temp = list->next;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    struct node *ten = malloc(sizeof(struct node));

    temp->i += 10;

    ten->i = temp->i;

    ten->next = NULL;
}

void printList(struct node *list)
{
    struct node *ptr = list->next;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->i);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct node *list = malloc(sizeof(struct node));
    list->next = malloc(sizeof(struct node));

    list->next->i = 3;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->i = 4;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->i = 5;
    list->next->next->next->next = NULL;

    printList(list);

    addTenToLast(list);

    printList(list);

    return 0;
}
