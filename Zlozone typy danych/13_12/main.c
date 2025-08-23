#include <stdio.h>
#include <stdlib.h>

struct Book{
    char *title;
    int page_count;
};

struct Book maxPages(struct Book tab[], int n)
{
    struct Book max_book = tab[0];

    for(int i = 0; i < n; i++)
    {
        if(max_book.page_count <= tab[i].page_count)
        {
            max_book = tab[i];
        }
    }
    return max_book;
};

int main()
{
    struct Book books[4] = {{"Kubus Puchatek", 78}, {"1984", 328}, {"Tango", 328}, {"Inny Swiat", 210}};

    struct Book result = maxPages(books, 4);

    printf("Title: %s\nPage Count: %d\n\n", result.title, result.page_count);

    return 0;
}
