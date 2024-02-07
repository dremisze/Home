#include <stdio.h>

int CzyPodzielna(int Liczba, int Przez)
{
	if (Liczba % Przez == 0)
	{
		printf("Liczba %i jest podzielna przez %i", Liczba, Przez);
		return 1;
	}
	else
	{
		printf("Liczba %i NIE jest podzielna przez %i", Liczba, Przez);
		return 0;
	}
}

int main()
{
	CzyPodzielna(10, 3);

	return 0;
}