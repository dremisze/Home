#include <stdio.h>

int main()
{
    int wiek;
    int wiek_basia;
    int nb_ucz;

    wiek = 21;
    wiek_basia = 25;
    nb_ucz = 1;

    printf("Wiek %i uczestnika kursu: %i lat\n", nb_ucz, wiek);
    wiek = 22;
    nb_ucz++;

    printf("Wiek %i uczestnika kursu: %i lat\n", nb_ucz, wiek);
    wiek = 25;
    nb_ucz++;
    
    printf("Wiek %i uczestnika kursu: %i lat\n", nb_ucz, wiek);

    printf("Basia ma %i lat", wiek_basia);
    return 0;
}
