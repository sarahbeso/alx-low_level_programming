#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the charater c to the stdout
*@c: the character to print
 * Description: writes Putchar function.
* Return: 1 (success)
*  on error, -1 is returned
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
