#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int repeat;
	char *program_name = av[0];

	if (ac != 2)
	{
		printf("Usage: %s <love-strength-from-1-to-10>\n", program_name);
		return (1);
	}

	repeat = atoi(av[1]);

	// Se il valore iniziale non è valido, chiedi da tastiera finché non lo è
	while (repeat < 1 || repeat > 10)
	{
		printf("Please enter a number between 1 and 10: ");
		if (scanf("%d", &repeat) != 1) {
			// se scanf fallisce (es. inserimento non numerico)
			printf("Invalid input.\n");
			// pulisce l’input buffer
			int ch;
			while ((ch = getchar()) != '\n' && ch != EOF);
		}
	}
	printf("I love you ");
	while (repeat > 0)
	{
		printf("very ");
		repeat--;
	}
	printf("much.\n");

	return (0);
}
