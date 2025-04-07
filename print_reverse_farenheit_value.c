#include <stdio.h>

int main(void)
{
    int fahr;

    fahr = 300;
    printf("Fahrenheit\tCelsius\n");
    while (fahr >= 0)
    {
        printf("%10d\t%7.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
        fahr -= 20;
    }
    return (0);
}
