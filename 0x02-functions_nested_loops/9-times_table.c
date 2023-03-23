#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
* row = row, col = column, ans = current result
*
*/
void times_table(void)
{
	int row, col, ans;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			ans = row * col;
			if (col == 0)
				_putchar('0' + ans);
			else if (ans < 10)
			{
				_putchar(' ');
				_putchar('0' + ans);
			}
			else
			{
				_putchar('0' + (ans / 10));
				_putchar('0' + (ans % 10));
			}
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
