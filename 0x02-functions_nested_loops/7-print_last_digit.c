#include "main.h"

/**
 * print_last_digit - print the last digit
 *@n: takes number input
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int lastnum;
if (n < 0)
lastnum = -1 * (n % 10);
else
lastnum = n % 10;
_putchar(lastnum + '0');
return (lastnum);
}
