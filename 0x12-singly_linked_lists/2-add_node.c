#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *courrant;

    courrant = malloc(sizeof(list_t));
    if (courrant == NULL)
    {
        return (NULL);
    }
    courrant->len = strlen(str);
    courrant->str = strdup(str);
    if (courrant->str == NULL)
    {
        free(courrant);
        return (NULL);
    }
    courrant->next = *head;
    *head = courrant;

    return (*head);
    
}