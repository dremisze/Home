#include <stdio.h>

int main()
{
    double a;
    double b;
    char dzialanie;

    printf("Jakie dzialanie chcesz wykonac? [+] [-] [*] [/]: ");
    scanf("%c", &dzialanie);

    printf("Podaj liczbe [a]: ");
    scanf("%lf", &a);

    printf("Podaj liczbe [b]: ");
    scanf("%lf", &b);

    switch (dzialanie)
    {
        case '+':
            printf("Wynik dodawania %f + %f = %f \n", a, b, a + b);
            break;
        case '-':
            printf("Wynik odejmowania %f - %f = %f \n", a, b, a - b);
            break;
        case '*':
            printf("Wynik mnożenia %f * %f = %f \n", a, b, a * b);
            break;
        case '/':
        if (b <= 0)
        {
            printf("Nie dziel baranie przez 0");
        }
        else if (b > 0)
        {
            printf("Wynik dzielenia %f / %f = %f \n", a, b, a / b);
            break;
        }

        default:
            break;
    }

    return 0;
}