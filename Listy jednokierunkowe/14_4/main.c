#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
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
    struct element *list1 = malloc(sizeof(struct element));
    list1->next = malloc(sizeof(struct element));
    list1->next->x = 1;
    list1->next->next = malloc(sizeof(struct element));
    list1->next->next->x = 2;
    list1->next->next->next = NULL;

    printListWithHead(list1);

    struct element *list2 = malloc(sizeof(struct element));
    list2->next = NULL;

    printListWithHead(list2);

    return 0;
}
