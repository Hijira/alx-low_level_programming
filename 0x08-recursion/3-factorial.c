#include "main.h"
/**
 * factorial - returns the factorial of number n.
 * @n: input number.
 * Return: factorial of the number.
 * betty style doc for function main goes there
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
