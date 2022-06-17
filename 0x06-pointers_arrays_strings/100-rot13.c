
#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 * betty style doc for function main goes there
 */
char *rot13(char *s)
{
int encode = 0, i;
char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (*(s + encode) != '\0')
{
for (i = 0; i < 52; i++)
{
if (*(s + encode) == alph[i])
{
*(s + encode) = rot13[i];
break;
}
}
encode++;
}
return (s);
}
}
