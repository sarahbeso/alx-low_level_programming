#include <unistd.h>
#include "main.h"
/**
 *_putchar writes the charater c to the stdout
*@c:The charater to print 
* Return: 1 (success)
*  on error, -1 is returned
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
