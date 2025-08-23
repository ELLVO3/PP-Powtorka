#include <stdio.h>
#include <stdlib.h>

struct Book{
    char *title;
    char *author;
    int publishedYear;
    int pages;
};

int main()
{
    struct Book b1 = {"Rok 1984", "George Orwell", 1949, 328};
    struct Book b2 = {"Sto lat samotnosci", "Garcia Marquez", 1967, 417};
    struct Book b3 = {"Zbrodnia i Kara", "Fiodor Dostojewski", 1866, 617};
    struct Book b4 = {"Buszujacy w zborzu", "J.D. Salinger", 1951, 277};
    struct Book b5 = {"Wladca pierscieni: Druzyna pierscienia", "J.R.R Tolkein", 1954, 423};

    struct Book tab[5] = {b1,b2,b3,b4,b5};

    for(int i = 0; i < 5; i++)
    {
        printf("Title: %s\nAuthor: %s\nYear of Publication: %d\nNumber of Pages: %d\n\n", tab[i].title, tab[i].author, tab[i].publishedYear, tab[i].pages);
    }

    return 0;
}
