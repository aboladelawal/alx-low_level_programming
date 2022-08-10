#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - prints different tpe of int,char,string and float etc.
 * @format: number of int,char ,float or string
 */
void print_all(const char * const format, ...)
{
	char *p;
	int i = 0;
	va_list arg;

	va_start(arg, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(arg, int));
				break;
			case 'i':
			  printf("%d", va_arg(arg, int));
					break;
			case 'f':
				printf("%f", (float)va_arg(arg, double));
				break;
			case 's':
				p = va_arg(arg, char*);
				if (p != NULL)
				{
					printf("%s", p);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
