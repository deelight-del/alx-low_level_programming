#include "search_algos.h"
#include <math.h>
/**
 * jump_list - Function to initiate jumping search algo with LList.
 * @list: head of the linkedList to search on.
 * @size: The size of the linkedList.
 * @value: The value to search for.
 *
 * Return: The pointer to the found integer or NULL otherwise.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int i = 0, idx_count = 0, prev_idx = 0;
	listint_t *present = list, *prev_jump = list, *track;

	if (list == NULL)
		return (NULL);
	while (present->next != NULL && present->n < value)
	{
		prev_jump = present;
		prev_idx = idx_count;
		for (i = 0; i < (int)(sqrt(size)); i++)
		{
			if (present->next == NULL)
				break;
			idx_count++;
			present = present->next;
		}
		printf("Value checked at index [%d] = [%d]\n",
				idx_count, present->n);
	}
	printf("Value found between indexes [%d] and [%d]\n",
			prev_idx, idx_count);
	/*Linear search between prev_jump and present*/
	track = prev_jump;
	while (track != present)
	{
		printf("Value checked at index [%d] = [%d]\n",
				prev_idx, track->n);
		if (track->n == value)
			return (track);
		track = track->next;
		prev_idx++;
	}
	printf("Value checked at index [%d] = [%d]\n",
				prev_idx, track->n);
	if (track->n == value)
		return (track);
	return (NULL);
}
