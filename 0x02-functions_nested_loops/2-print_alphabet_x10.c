#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * Description: function print alphabet
 * Return: Always 0
 */
void print_alphabet_x10(void);
{
int i, alpha;
for (i = 1; i <= 10; i++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);
_putchar('\n');
}
}
