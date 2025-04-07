#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    double  sum;
    int     i;
    double  average;

    if (argc < 2)
    {
        printf ("Use: %s num1 num2 num3 ... \n", argv[0]);
        return (1);
    }
    sum = 0.0;
    i = 1;
    while (i < argc)
    {
        sum = sum + atof(argv[i]);
        i++;
    }
    average = sum / (argc - 1);
    printf("You have inserted some  %d Numbers.\n", argc - 1);
    printf("The sum is: %.2lf\n", sum);
    printf("The average is è: %.2lf\n", average);
    return (0);
}
