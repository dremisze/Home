#include <stdio.h>
#include <math.h>

int main()
{
    float inwestycja;
    float rsp;
    float okres;
    float result;
    
    inwestycja = 5000.0;
    rsp = 0.05;
    okres = 3.0;
    
    result = inwestycja * powf((1 + rsp), okres);

	printf("Wartosc koncowa z kwoty %.2f z roczna stopa 5%% przez okres %.0f lat wynosi %.2f\n", inwestycja, okres, result);


	return 0;
}