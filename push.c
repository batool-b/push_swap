/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbaras <balbaras@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:03:34 by balbaras          #+#    #+#             */
/*   Updated: 2026/11/23 16:12:27 by balbaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	if (b->size == 0)
		return ;
	i = a->size - 1;
	while (i >= 0)
	{
		a->array[i + 1] = a->array[i];
		i--;
	}
	a->array[0] = b->array[0];
	j = 0;
	while (j < b->size - 1)
	{
		b->array[j] = b->array[j + 1];
		j++;
	}
	a->size++;
	b->size--;
}
