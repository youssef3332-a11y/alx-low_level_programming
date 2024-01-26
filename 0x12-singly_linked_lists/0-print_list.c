#include "lists.h"
/**
 *print_list - p
 *@h:h
 *Return: count
*/
long unsigned int print_list(const list_t *h)
{
    long unsigned int count = 0;
    const list_t *corrunt = h;

    while(corrunt != NULL)
    {
        if (corrunt->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%u] %s\n", corrunt->len, corrunt->str);
        }
        corrunt = corrunt->next;
        count += 1;
    }
    return (count);
}
