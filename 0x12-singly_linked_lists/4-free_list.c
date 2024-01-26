#include "lists.h"
/**
 * free_list - free
 * @head: the start
 * Return: void
*/
void free_list(list_t *head)
{
    list_t *know, *next;

    if (head != NULL){
    know = head;
    next = know->next;
    while(next != NULL)
    {
        free(know);
        know = next;
        next = know->next;
    }
    free(know);
    }
}