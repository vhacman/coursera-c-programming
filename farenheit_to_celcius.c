#include <stdio.h>
#include <stdlib.h> // per atoi()

// Funzione che converte da Fahrenheit a Celsius, con risultato double
double fahrenheit_to_celsius(int fahrenheit)
{
    return (fahrenheit - 32) / 1.8;
}

int main(int argc, char **argv)
{
    int fahrenheit;
    double celsius;

    if (argc != 2)
    {
        printf("Usage: %s <Fahrenheit temperature>\n", argv[0]);
        return (1);
    }
    fahrenheit = atoi(argv[1]); // converte stringa in intero
    celsius = fahrenheit_to_celsius(fahrenheit);
    printf("%d Fahrenheit is %.2lf Celsius.\n", fahrenheit, celsius);
    return (0);
}
