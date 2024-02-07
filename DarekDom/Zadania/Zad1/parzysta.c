#include <stdio.h>

int CzyParzysta(int Liczba)
{
	if (Liczba % 2 == 0)
	{
		printf("0\n");
		printf("Jest parzysta");
		return 0;
	}
	else
	{
		printf("1");
		return 1;
	}
}

int main()
{
	CzyParzysta(10);

	return 0;
}