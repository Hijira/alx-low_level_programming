#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 * betty style doc for function main goes there
 */
void *malloc_checked(unsigned int b)
{
char *c;
c = malloc(b);
if (c == NULL)
exit(98);
return (c);
}
