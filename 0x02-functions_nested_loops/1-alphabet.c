#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * Description: function print alphabet
 * Return: Always 0
 */
void print_alphabet(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);
_putchar('\n');
return (0);
}
