#include <limits.h>
#include "main.h"

/*
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int main(void)
{
	int r;

	r = print_last_digit(98);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
