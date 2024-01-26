#include "lists.h"
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
