#include <stdio.h>

int biale()
{
	int suma;
	char znak;

	suma = 0;
	while (scanf("%c", &znak) == 1)
	{
		if (znak == ' ' || znak == '\t' || znak == '\n')
		{
			suma++;
		}
	}
	return suma;
}


int main()
{
	printf("Suma bialych znakow: %i \n", biale());
	return 0;
}