#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 * betty style doc for function main goes there
 */
void free_list(list_t *head)
{
list_t *current;
while ((current = head) != NULL)
{
head = head->next;
free(current->str);
free(current);
}
}
