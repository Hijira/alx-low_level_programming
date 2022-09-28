#include "main.h"
/**
 * _memset - fill n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 * betty style doc for function main goes there
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
#include "main.h"

/**

 * _memset - fills n pointed by S with constant byte b,

 * @s: memory area.

 * @b: constant byte.

 * @n: bytes filled.

 * Return: the pointer to dest.

 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;



	for (i = 0; i < n; i++)

		*(s + i) =  b;



	return (s);

}
