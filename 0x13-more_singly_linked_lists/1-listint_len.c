#include "lists.h"

/**
 * listint_len - Return the number of elements
 * @h: data type pointer of struct
 * Return: elements of the str i
 */
size_t listint_len(const listint_t *h)
{
    size_t num = 0;

    while (h)
    {
        num++;
        h = h->next;
    }

    return (num);
}
