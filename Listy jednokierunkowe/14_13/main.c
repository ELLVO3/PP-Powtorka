#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int find(struct element *list, int a)
{
    while(list != NULL)
    {
        if(list->x == a)
        {
            return 1;
        }
        list = list->next;
    }
    return 0;
}

void printList(struct element *list)
{
    if(list == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }

    struct element *ptr = list;

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
    list->x = 1;
    list->next = malloc(sizeof(struct element));
    list->next->x = -3;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 2;
    list->next->next->next = NULL;

    printList(list);

    printf("%d\n", find(list, -3));
    printf("%d\n", find(list, -2));

    return 0;
}
