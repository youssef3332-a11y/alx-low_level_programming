#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *courrant;
    list_t *trak;

    courrant = malloc(sizeof(list_t));
    if (courrant == NULL)
    return (NULL);
    courrant->len = strlen(str);
    courrant->str = strdup(str);
    courrant->next = NULL;
    if (courrant->str == NULL)
    {
        free(courrant);
        return (NULL);
    }
    if (*head == NULL)
    {
        *head = courrant;
    }
    else
    {
        trak = *head;
        while(trak->next != NULL)
        {
            trak = trak->next;
        }
        trak->next = courrant;
    }
    return (courrant); 
}
