#include "lists.h"

/**
 *check_cycle - Checks if a linked list contains a cyc
 *@list: linked list to check
 *
 *Return: A if the list has a cycle, 0 if it dosn't
 */
int check_cycle(listint_t *list)
{
listint_t *slow = list;
listint_t *fast = list;

if (!list)
return (0);
while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
return (1);
}
return (0);
}
