#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int find(struct element *list, int a)
{
    struct element *temp = list->next;

    while(temp != NULL)
    {
        if(temp->x == a)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

void printList(struct element *list)
{
    if(list->next == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }

    struct element *ptr = list->next;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 1;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -3;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 5;
    list->next->next->next->next = NULL;

    printList(list);

    printf("%d\n", find(list, -3));
    printf("%d\n", find(list, -2));

    return 0;
}
