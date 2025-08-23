#include <stdio.h>
#include <stdlib.h>

struct Book{
    char title[50];
    int page_count;
};

struct Book initBook(char title[], int page_count)
{
    struct Book temp;

    temp.page_count = page_count;

    int i;
    for(i = 0; title[i] != 0; i++)
    {
        temp.title[i] = title[i];
    }
    temp.title[i] = 0;
    return temp;
};

void showBook(struct Book arg)
{
    printf("Title: %s\nPage Count: %d\n\n", arg.title, arg.page_count);
}

void addPages(struct Book *ptr)
{
    ptr->page_count += 10;
}

int main()
{
    struct Book result = initBook("1984", 328);

    showBook(result);

    addPages(&result);

    showBook(result);

    return 0;
}
