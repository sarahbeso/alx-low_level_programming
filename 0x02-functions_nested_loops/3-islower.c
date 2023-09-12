#include "main.h"

/**
 *_islower - print 1 if lower and prints 0 if else
 *@c : checks input of function
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
