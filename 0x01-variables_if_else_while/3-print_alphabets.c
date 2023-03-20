#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alpabet in lowercase and then in UPPERCASE
 * Return: 0
 */
int main(void)
{
	char var;
	char var1;

	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
	}
	for (var1 = 'A'; var1 <= 'Z'; var++)
	{
		putchar(var1);
	}
	putchar('\n');
	return (0);
}
