#include "main.h"
/**
 * _strlen - returns the length of a string
 * Return: returns 0
 */
int _strlen(char *s)
{
	int y = 0;

	while (*s++ != '\0')
		y++;
	return (y);
}
