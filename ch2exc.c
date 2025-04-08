#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCALLS 10000000   // number of calls to rand()
#define NCOLS 8           // number of columns to print
#define NLINES 3          // number of lines to print

/**
 * Function: print
 * ----------------
 * Prints the timing summary of the rand() test.
 *
 * @param end:   The clock value recorded at the end of the test
 * @param begin: The clock value recorded at the beginning of the test
 *
 * It calculates the total elapsed time in seconds and also the average
 * time per call to rand().
 */
void print(clock_t end, clock_t begin)
{
	double elapsed_time;
	
	elapsed_time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\n    end clock: %ld\n", end);
	printf("  begin clock: %ld\n", begin);
	printf(" elapsed time: %.10f seconds\n", elapsed_time);
	printf("time for each call: %.10f seconds\n", elapsed_time / NCALLS);
}

/**
 * Function: run_rand_test
 * -----------------------
 * Runs the performance test by calling rand() NCALLS times,
 * and prints the first few values in a formatted output.
 *
 * It also records the time before and after the loop using clock(),
 * then calls print() to report timing information.
 */
void	run_rand_test(void)
{
	int			i;
	int			val;
	clock_t 	begin, end;

	i = 1;
	begin = clock();
	srand(time(NULL));
	printf("\nTIMING TEST: %d calls to rand()\n\n", NCALLS);
	while (i <= NCALLS)
	{
		val = rand();
		i++;
		if (i <= NCOLS * NLINES)
		{
			printf("%7d", val);
			if (i % NCOLS == 0)
				putchar('\n');
		}
		else if (i == NCOLS * NLINES + 1)
			printf(".....\n");
	}
	end = clock();
	print(end, begin);
}

/**
 * Function: main
 * --------------
 * Entry point of the program. It simply calls run_rand_test().
 *
 * @return 0 on successful execution
 */
int	main(void)
{
	run_rand_test();
	return (0);
}
