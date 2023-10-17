#include "main.h"

/**
  * _printf - produces output according to format specified.
  * @format: is the character string.
  * @...: is the ellipsis.
  * Return: the number of characters printed.
  */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count, str_count;

	va_start(args, format);

	count = 0;
	i = 0;

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putch(format[i]);
		else if (format[i + 1] == 'c')
		{
			_putch(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			char *str = va_arg(args, char*);

			str_count = _puts(str);
			i++;
			str_count--;
			count += str_count;
		}
		else if (format[i + 1] == '%')
			_putch('%');
		count++;
		i++;
	}
	va_end(args);
	return (count);
}
