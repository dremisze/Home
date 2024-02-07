#include <stdio.h>

char Przesun(char Litera, int Przesuniecie)
{
	if (Litera >= 'a' && Litera <= 'z')
	{
		return (Litera - 'a' + Przesuniecie + 26) % 26 + 'a';
	}
	else if (Litera >= 'A' && Litera <= 'Z')
	{
		return (Litera - 'A' + Przesuniecie + 26) % 26 + 'A';
	}
	else if (Litera >= '0' && Litera <= '9')
	{
		return (Litera - '0' + Przesuniecie + 10) % 10 + '0';
	}
	else
		return Litera;

}

int main()
{
    char litera;
    while(scanf("%c", &litera) == 1)
    {
        printf("%c", Przesun(litera, -1));
    }
    return 0;
}