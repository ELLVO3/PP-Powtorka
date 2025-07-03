#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok;

    printf("Podaj rok: ");
    scanf("%d", &rok);

    (rok%4 == 0 && rok%100 != 0) || rok%400 == 0 ? printf("Podany rok jest przestepny") : printf("Podany rok nie jest przestepny");

    return 0;
}
