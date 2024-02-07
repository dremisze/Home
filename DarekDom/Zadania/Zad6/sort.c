#include <stdio.h>

void revtab(int *tab, int size)
{
    int i = 0;
    int temp;
    
    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
        i++;
    }
}

int main()
{
    int l = 0;
    int tab[10];
    
    while (l < 10)
    {
        scanf("%d", &tab[l]);
        l++;
    }
    
    revtab(tab, 10);
	l = 0;
    
    while (l < 10)
    {
        printf("%d", *&tab[l]);
        l++;
    }
	puts("\n");
    
    return 0;
}

