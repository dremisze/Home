#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			if (i > 46340)
				return (0);
			i++;
		}
	}
	return (0);
}

int main()
{
    double a;
    double b;
    double p;
    double wynik;

    printf("Podaj długość przyprostokątnej [a] = ");
    scanf("%lf", &a);

    printf("Podaj długość przyprostokątnej [b] = ");
    scanf("%lf", &b);

    p = ft_iterative_power(a, 2) + ft_iterative_power(b, 2);

    wynik = ft_sqrt(p);

    printf("\n Dla trojkata o danych: \n a = %f \n b = %f \n c = %f", a, b, wynik);
    
    return 0;
}