#include <stdio.h>

#define PI 3.14

float pole(float promien)
{
    float wynik;
    float pi = PI;
    wynik = PI * (promien * promien);
	return wynik;
}

int main() {
    float r = 4.0;
    float result;
    
    result = pole(r);
    printf("Pole kola wynosi %.2f", result);
    
    return 0;
}