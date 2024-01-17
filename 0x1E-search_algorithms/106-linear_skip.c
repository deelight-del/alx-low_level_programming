#include "search_algos.h"
#include <math.h>
/**
 * linear_skip - Function to initiate skip list search algo with LList.
 * @list: head of the linkedList to search on.
 * @value: The value to search for.
 *
 * Return: The pointer to the found integer or NULL otherwise.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = list, *next = list, *track;

	if (list == NULL)
		return (NULL);
	if (value < list->n)
		return (NULL);
	while (next->express != NULL)
	{
		prev = next;
		next = next->express;
		printf("Value checked at index [%lu] = [%d]\n",
				next->index, next->n);
		if (prev->n < value && next->n > value)
			break;
	}
	if (!(prev->n < value && next->n > value))
	{
		prev = next;
		while (next->next)
			next = next->next;
	}
	/*Linear search between prev_jump and present*/
	printf("Value found between indexes [%lu] and [%ld]\n",
			prev->index, next->index);
	track = prev;
	while (track != next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				track->index, track->n);
		if (track->n == value)
			return (track);
		track = track->next;
	}
	printf("Value checked at index [%lu] = [%d]\n",
				track->index, track->n);
	if (track->n == value)
		return (track);
	return (NULL);
}
