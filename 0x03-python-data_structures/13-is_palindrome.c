#include "lists.h"
#include <stddef.h>
/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to pointer of the head of the list
 * Return: 0 if not a palindrome, 1 if a palindrome
 */
int is_palindrome(listint_t **head)
{
    listint_t *current = *head;
    int values[1024];  /* Assuming maximum list size of 1024 */
    int count = 0;
    int i;

    if (*head == NULL || (*head)->next == NULL)
        return (1);

    while (current != NULL)
    {
        values[count] = current->n;
        current = current->next;
        count++;
    }

    for (i = 0; i < count / 2; i++)
    {
        if (values[i] != values[count - 1 - i])
            return (0);
    }

    return (1);
}
