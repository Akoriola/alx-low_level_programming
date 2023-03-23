#include "main.h"
/**
 * _islower - A function that checks for lowercase letters
 * @c: single letter input
 * Return: 1 (success), and return 0 if (error)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
