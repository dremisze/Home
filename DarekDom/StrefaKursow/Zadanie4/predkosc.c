#include <stdio.h>

int main()
{
    int predkosc;

    printf("Wprowadz predkosc: km/h ");
    scanf("%i", &predkosc);

    if (predkosc > 50 && predkosc <= 75)
    {
        printf("Mandat 100zl !\n");
        printf("Wypisz mandat\n");
    }
    else if (predkosc > 75 && predkosc < 100)
    {
        printf("Mandat 200zl !\n");
        printf("Wypisz mandat\n");
    }
    else if (predkosc >= 100)
    {
        printf("Odbierz prawo jazdy! \n");
    }
    else
    {
        printf("Predkosc prawidlowa \n");
        printf("Pozdrow kierowce \n");
    }

    return 0;
}
