#include "main.h"
/**
 * _strstr - finds 1st occurrence of substring needle,
 * in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 * betty style doc for function main goes there
*/
char *_strstr(char *haystack, char *needle)
{
char *bhaystack;
char *pneedle;
while (*haystack != '\0')
{
bhaystack = haystack;
pneedle = needle;
while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (!*pneedle)
return (bhaystack);
haystack = bhaystack + 1;
}
return (0);
}
