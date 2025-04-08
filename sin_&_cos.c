#include <stdio.h>
#include <math.h>

// Function to print a table of sine and cosine values between (0,1) using while loop
void print_sin_cos_table()
{
    double x = 0.1;

    printf("x\t\t sin(x)\t\t cos(x)\n");
    printf("----------------------------------------\n");

    while (x < 1.0)
    {
        printf("%.1lf\t\t %.6lf\t %.6lf\n", x, sin(x), cos(x));
        x += 0.1;
    }
}

int main(void)
{
    print_sin_cos_table(); // Call the function
    return 0;
}
