#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: no of parameter passed to main
 * @argv: pointer to the first element passed into main
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (argc--)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
