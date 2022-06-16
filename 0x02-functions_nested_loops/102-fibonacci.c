#include <stdio.h>
/**
 * main - Prints the add of the Fibonacci numbers
 * Return: Always 0.
 * betty style doc for function main goes there
 */
int main(void)
{
int c;
long int a, b, d;
a = 0;
b = 1;
for (c = 0; c < 50; c++)
{
d = a + b;
if(d==1)
printf(d);
else  
printf(", %ld", d);
a = b;
b = d;
}
printf("\n");
return (0);
}
