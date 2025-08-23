#include <stdio.h>
#include <stdlib.h>

enum Month{Styczen, Luty, Marzec, Kwiecien, Maj, Czerwiec, Lipiec, Sierpien, Wrzesien, Pazdziernik, Listopad, Grudzien};

int days_in_month(enum Month arg)
{
    if(arg == Styczen || arg == Marzec || arg == Maj || arg == Lipiec || arg == Sierpien || arg == Pazdziernik || arg == Grudzien)
    {
        return 31;
    }

    if(arg == Luty)
    {
        return 28;
    }
    return 30;
}

int main()
{
    enum Month maj = Maj;
    enum Month kwiecien = Kwiecien;
    enum Month luty = Luty;

    printf("%d\n", days_in_month(maj));
    printf("%d\n", days_in_month(kwiecien));
    printf("%d\n", days_in_month(luty));

    return 0;
}
