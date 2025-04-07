#include <stdio.h>
#include <stdlib.h>  // per atoi()

// Funzione che converte miglia + yard in chilometri
double miles_yards_to_kilometers(int miles, int yards)
{
    return 1.609 * (miles + yards / 1760.0);
}

int main(int argc, char **argv)
{
    int miles;
    int yards;
    double kilometers;

    if (argc != 3)
    {
        printf("Usage: %s <miles> <yards>\n", argv[0]);
        return (1);
    }

    miles = atoi(argv[1]);
    yards = atoi(argv[2]);
    kilometers = miles_yards_to_kilometers(miles, yards);
    printf("\n%d miles and %d yards is %.6lf kilometers.\n", miles, yards, kilometers);
    return (0);
}
