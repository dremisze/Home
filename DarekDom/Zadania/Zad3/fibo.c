#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int Numer)
{
	if (Numer < 0)
	{
		return (-1);
	}
	else if (Numer == 0)
	{
		return (0);
	}
	else if (Numer == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(Numer - 1) + ft_fibonacci(Numer - 2));
	}
}

int main(int argc, char *argv[])
{
	 if (argc != 2)
    {
		printf("Uzycie: %s <Numer>\n", argv[0]);
		return (1);
    }
	int Numer = atoi (argv[1]);
	printf("Ciag fibonacci wynosi %d\n", ft_fibonacci(Numer));
	return (0);
}