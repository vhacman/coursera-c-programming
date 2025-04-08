#include <stdio.h>   // Required for input/output functions
#include <math.h>    // Required for mathematical functions like sin()

// Function to calculate the sine of a valid input value
double compute_sine(double x) {
    return sin(x);
}

// Main function: entry point of the program
int main(void)
{
    double x; // Variable to store user input

    // Prompt the user for input
    printf("Enter a value for x (strictly between 0 and 1): ");
    scanf("%lf", &x); // Read a floating-point number from the user

    // Validate the input range: x must be strictly between 0 and 1
    if (x <= 0 || x >= 1)
    {
        // Error message if input is out of range
        printf("Error: x must be strictly between 0 and 1.\n");
        return 1; // Exit the program with an error code
    }

    // Call the function to compute the sine of the input value
    double result = compute_sine(x);

    // Print the result with proper formatting
    printf("The sine of %.4lf is: %.6lf\n", x, result);

    return 0; // End of program
}
