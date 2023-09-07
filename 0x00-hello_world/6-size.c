#include <stdio.h>
/**
 * main - Entry point
 * Desciption: using sizeof to print size of variable
 * Return: Always 0 (success)
 */
int main(void)
{
printf("Size of a char:%d byte(s)", Sizeof(char));
printf("Size of an int :%d byte(s)", Sizeof(int));
printf("Size of a long int:%d byte(s)", Sizeof(long int));
printf("Size of a long long int:%d byte(s)", Sizeof(long long int));
printf("Size of a float:%d byte(s)", Sizeof(float));
return (0);
}
