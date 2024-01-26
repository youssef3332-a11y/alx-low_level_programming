#include "lists.h"
/**
 *print_list - p
 *@h:h
 *Return: count
*/
size_t print_list(const list_t *h)
{
    const size_t count = 0;
    list_t *corrunt = h;

    while(corrunt != NULL)
    {
        if (corrunt->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%lu] %s\n", corrunt->len, corrunt->str);
        }
        corrunt = corrunt->next;
        count++;
    }
    return (count);
}
