#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printPos(struct element *list)
{
    struct element *ptr = list;

    while(ptr != NULL)
    {
        if(ptr->x > 0)
        {
            printf("%d\n", ptr->x);
        }
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->x = 1;
    list->next = malloc(sizeof(struct element));
    list->next->x = -2;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 3;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 0;
    list->next->next->next->next = NULL;

    printPos(list);

    return 0;
}
