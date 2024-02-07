#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int negat(int n)
{
    if (n < 0)
    {
        write(1, "N", 1);
    }
    else
    {
        write(1, "P", 1);
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
   
		int number = atoi(argv[1]);
		if (negat(number))
		{
			printf("Liczba %d jest P\n", number);
		}
		else
		{
        	printf("Liczba %d jest N\n", number);
		}
    
    return 0;
}
