#include "main.h"
/**
 * _strpbrk - locates the first occurence of any string
 * for any of a set of bytes in accept.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 * betty style doc for function main goes there
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int a, b;
for (a = 0; *(s + a) != '\0'; a++)
{
for (b = 0; *(accept + b) != '\0'; b++)
{
if (*(s + a) == *(accept + b))
return (s + a);
}
}
return ('\0');
}
