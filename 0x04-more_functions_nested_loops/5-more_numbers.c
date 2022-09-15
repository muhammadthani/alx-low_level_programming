#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 then a new line 10 times.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int x = 0;

	if (x <= 10)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (i = 498; i <= 499; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
