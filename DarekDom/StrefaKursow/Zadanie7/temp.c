#include <stdio.h>

double ft_temp(double t)
{
	double celsjusz;
	celsjusz = (t - 32) * 5 / 9;
	return(celsjusz);
}

int main()
{
	double przelicznik;
	double n;
	
	printf("\n*** PRZELICZNIK FAHRENHEIT NA CELSUJUSZ ***\n\n");
	printf("Podaj temperature fahrenheit: ");
	scanf("%lf", &n);
	przelicznik = ft_temp(n);
	printf("Temperatura = %f *C\n", przelicznik);

	return 0;
}
