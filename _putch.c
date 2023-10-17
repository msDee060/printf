#include "main.h"

/**
 * _putch - prints characters to stanard output.
 * @c: is the character to be printed.
 * Return: specified character.
 */
int _putch(char c)
{
	return (write(1, &c, 1));
}
