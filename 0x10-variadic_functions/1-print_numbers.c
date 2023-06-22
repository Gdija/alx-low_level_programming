#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: character
 * @n: integer
 * @...: a variable number of parameters
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int id;

	va_start(ap, n);

	for (id = 0; id < n; id++)
	{
	printf("%d", va_arg(ap, int));
	if (id != (n - 1) && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	printf("\n");

	va_end(ap);
}
