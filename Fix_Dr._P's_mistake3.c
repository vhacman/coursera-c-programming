#include <stdio.h>   // Header for input/output functions like printf
#include <math.h>    // Header for mathematical functions like sin() and fabs()

int main(void)
{
	double interval; // Variable to store the current x-value (in radians)
	int i;           // Loop counter

	// Loop from 0 to 29 to generate 30 values (from 0.0 to 2.9 in steps of 0.1)
	for (i = 0; i < 30; i++)
	{
		interval = i / 10.0; // Convert integer i to a decimal step (i.e., 0.0, 0.1, ..., 2.9)

		// Print the sine of the interval and its absolute value (using fabs for floating-point absolute value)
		printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
	}

	// Print a visual separator at the end of the output
	printf("\n+++++++\n");

	return 0; // Exit program with status 0 (success)
}

/*
#include <stdio.h>   // Header for input/output functions
#include <math.h>    // Header for math functions like sin() and fabs()

int main(void)
{
    double interval; // Variable to hold values from 0.0 to 2.9
    int i;           // Loop counter

    // Loop generates 30 steps: 0.0, 0.1, ..., 2.9
    for (i = 0; i < 30; i++)
    {
        interval = i / 10.0; // Convert loop counter to decimal step

        // OUT OF SCOPE COMMENT:
        // ⚠️ Originally, the function 'abs()' was used here: abs(sin(interval))
        // ❌ This was incorrect because abs() is for integers, not floating-point numbers.
        // ✅ The correct function for floating-point absolute values is 'fabs()', which is used below.

        // Print the interval and the absolute value of its sine
        printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
    }

    // Print separator for output clarity
    printf("\n+++++++\n");

    return 0; // Program completed successfully
}
*/