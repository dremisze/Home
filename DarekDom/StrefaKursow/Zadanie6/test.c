#include <stdio.h>
#include <unistd.h>

int main()
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		//printf("%s", &i);
		write(1, &i, 1);
		i++;
	}
	

	return 0;
}