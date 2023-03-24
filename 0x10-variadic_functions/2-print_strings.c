#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @n: integer
 * @separator: character
 * @...: a variable number of parameters
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int id;
	char *str;

	va_start(ap, n);

	for (id = 0; id < n; id++)
	{
	str = va_arg(ap, char*);
	if (str  == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}
	if (id != (n - 1) && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(ap);
}
