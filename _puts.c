#include "main.h"

/**
  * _puts - prints a string.
  * @c: is the string.
  * Return: count.
  */
int _puts(char *c)
{
	int count;
	
	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			_putch(c[count]);
		}
	}
	return (count);
}
