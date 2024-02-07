#include <stdio.h>

int main()
{
    float a;
    float b;
    float h;
    float wynik;
    
    a = 4.0;
    b = 2.0;
    h = 3.0;
    wynik = ((a + b) * h) / 2;
    
    printf("Pole trapezu wynosi = %.2f", wynik);
    return 0;
}