#include "main.h"

/**
 *_isalpha - print 1 if lower and prints 0 if else
 *@c : checks input of function
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
