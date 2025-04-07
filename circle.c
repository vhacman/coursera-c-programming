#include <stdio.h>
#include <stdlib.h>  // per atof()

#define PI 3.14159

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: %s <radius>\n", argv[0]);
        return (1); // errore: numero errato di argomenti
    }
    double radius = atof(argv[1]); // converte la stringa in double
    double area = PI * radius * radius;
    printf("The area is: %lf\n", area);
    return 0;
}
