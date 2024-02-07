#include <stdio.h>
#define ROZMIAR 5

int		main ()
{
	int		tablica[ROZMIAR] = {0};
	int		suma;
	int		i;

	i = 0;
	suma = 0;

	while (i < ROZMIAR)
	{
		printf("Podaj kaloroczynosc %i posilku: ", i + 1);
		scanf("%i", &tablica[i]);
		suma += tablica[i];
		i++;
	}

	printf("Suma kalorycznosci to: %i kcal", suma);

	return 0;
}