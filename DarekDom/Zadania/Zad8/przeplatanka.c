#include <stdio.h>

#define MAX_LENGTH 51

int main()
{
	int i;
	int j;
	char str1[MAX_LENGTH];
	char str2[MAX_LENGTH];

	i = 0;
	j = 0;
	scanf("%50s", str1);
	scanf("%50s", str2);
	while (str1[i] != '\0' || str2[j] != '\0')
	{
		if (str1[i] != '\0')
		{
			printf("%c", str1[i]);
			i++;
		}
		if (str2[j] != '\0')
		{
			printf("%c", str2[j]);
			j++;
		}
	}
	return 0;
}