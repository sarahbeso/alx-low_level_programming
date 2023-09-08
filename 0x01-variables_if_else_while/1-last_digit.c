#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point
 * Description: number is negative,positive or equal zero
 * Return: 0 (success)
 */
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
	print("Last digit of%i is %i and is greater than 5\n", n, digit);
else if (n == 0)
	print("Last digit of%i is %i and is 0\n", n, digit);
else if (n < 6 && digit != 0)
	print("Last digit of%i is %i and is less than 6 and not 0\n", n, digit);
return (0);
}
