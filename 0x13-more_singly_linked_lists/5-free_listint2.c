#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the head of the list
 *
 *Return: void
 */


void free_listint2(listint_t **head)
{
listint_t *temp;
listint_t *curr;

if(head != NULL)
{
curr = *head;
while (*head != NULL)
{
curr = *head;
while ((temp = curr) != NULL)
{
curr = curr->next;
free(temp);
}
*head = NULL;
}
}
