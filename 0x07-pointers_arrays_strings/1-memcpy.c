#include "main.h"
/**
 * _memcpy - copies n bytes from src to dst,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 * betty style doc for function main goes there
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
*(dest + a) =  *(src + a);
return (dest);
}
