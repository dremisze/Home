#include <stdio.h>
#include <string.h>

#define MAX_ROZMIAR 51

void revtab(char *tab, int size)
{
    int i = 0;
    char temp;
    
    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
        i++;
    }
}

int ft_strlen(char *str)
{
	int length;
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return length;
	
}

int main()
{
	char tab[MAX_ROZMIAR] = "Siemka";

	/*printf("Wprowadz lancuch znakow (max 50 znakow): ");
	scanf("%50[^\n]", tab);
	*/
	int length = ft_strlen(tab);
	printf("Dlugosc wprwadzonego lancucha: %d\n", length);
	
	revtab(tab, length);

	printf("Odwrocony lancuch:\n %s \n", tab);

	return 0;


}