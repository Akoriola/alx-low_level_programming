#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: number of actual line arguments passed to main function
 * @argv: pointer to the first element in the array of arguments
 * Return : Always Zero
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
