#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithoutHead(struct element *list)
{
    if(list == NULL)
    {
        printf("Lista jest pusta\n");
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
    struct element *list1 = NULL;
    printListWithoutHead(list1);

    struct element *list2 = malloc(sizeof(struct element));
    list2->x = 1;
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 2;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->x = 3;
    list2->next->next->next = NULL;
    printListWithoutHead(list2);

    return 0;
}
