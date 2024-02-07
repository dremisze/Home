#include <stdio.h>

int main()
{
    int i = 0;
    char* tab[] = {"Pierwsze zdanie", "Drugie zdanie"};
    while (i < 2)
    {
        printf("%s\n", tab[i]);
        i++;
    }
    return 0;
}