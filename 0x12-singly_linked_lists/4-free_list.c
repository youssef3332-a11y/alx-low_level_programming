#include "lists.h"
/**
 * free_list - free
 * @head: the start
 * Return: void
*/
void free_list(list_t *head)
{
    list_t *know, *next;

    know = head;

    while (know != NULL)
    {
        next = know->next;
        free(know);
        know = next;
    }
}
