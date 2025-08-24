#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * createWithHead()
{
    struct element *list = malloc(sizeof(struct element));

    list->next = NULL;

    return list;
};

void printListWithHead(struct element *list)
{
    if(list->next == NULL)
    {
        printf("Lista jest pusta\n");
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
    list->next = NULL;

    printListWithHead(list);

    return 0;
}
