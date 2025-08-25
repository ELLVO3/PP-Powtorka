#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

void doubleLast(struct node *list)
{
    if(list == NULL)
    {
        return;
    }

    struct node *ptr = list;

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    struct node *doubled = malloc(sizeof(struct node));

    doubled->i = ptr->i;
    doubled->next = NULL;

    ptr->next = doubled;
}

void printList(struct node *list)
{
    struct node *ptr = list;
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

    list->i = 3;
    list->next = malloc(sizeof(struct node));
    list->next->i = 4;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->i = 5;
    list->next->next->next = NULL;

    printList(list);

    doubleLast(list);

    printList(list);

    return 0;
}
