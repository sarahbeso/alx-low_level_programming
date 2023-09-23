#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to point
 * Return: on success1.
 * on error, -1 is returned, and errno is det appropritely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
