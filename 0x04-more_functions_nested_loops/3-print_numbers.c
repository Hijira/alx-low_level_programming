#include "main.h"
/**
* print_numbers - prints numbers between 0 to 9.
* Return: no return.
* betty style doc for function main goes there
*/
void print_numbers(void)
{
int ch;
for (ch = 48; ch < 58; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
