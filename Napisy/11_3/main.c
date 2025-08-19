#include <stdio.h>
#include <stdlib.h>

int countVowels(char napis[])
{
    int counter = 0;
    for(int i = 0; napis[i] != 0; i++)
    {
        if(napis[i] == 65 || napis[i] == 69 || napis[i] == 73 || napis[i] == 79 || napis[i] == 85 ||
           napis[i] == 97 || napis[i] == 101 || napis[i] == 105 || napis[i] == 111 || napis[i] == 117)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    char napis[] = "AAFGEe";

    printf("%d\n", countVowels(napis));

    return 0;
}
