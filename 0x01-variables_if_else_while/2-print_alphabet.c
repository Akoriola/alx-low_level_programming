#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lowercase followed by a new line
 * Return: 0
 */
int main(void)
{
char var;
for (var = 'a'; var <= 'z'; var++)
{
	putchar(var);
}
	putchar('\n');
	return (0);
}
