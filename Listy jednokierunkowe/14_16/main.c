#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int sumNeg(struct element *list)
{
    int sum = 0;

    struct element *temp = list->next;

    while(temp != NULL)
    {
        if(temp->x < 0)
        {
            sum += temp->x;
        }
        temp = temp->next;
    }
    return sum;
}

void printList(struct element *list)
{
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
    list->next->next->x = -2;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -3;
    list->next->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->next->x = 6;
    list->next->next->next->next->next = NULL;

    printList(list);

    printf("%d\n", sumNeg(list));

    return 0;
}
