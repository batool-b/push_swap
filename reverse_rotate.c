/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbaras <balbaras@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:27:08 by balbaras          #+#    #+#             */
/*   Updated: 2026/11/24 16:33:00 by balbaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rra(t_stack *a)
{
	int	i;
	int	temp;

	if (a->size < 2)
		return ;
	i = a->size - 1;
	temp = a->array[i];
	while (i > 0)
	{
		a->array[i] = a->array[i - 1];
		i--;
	}
	a->array[i] = temp;
}

void	rrb(t_stack *b)
{
	int	i;
	int	temp;

	if (b->size < 2)
		return ;
	i = b->size - 1;
	temp = b->array[i];
	while (i > 0)
	{
		b->array[i] = b->array[i - 1];
		i--;
	}
	b->array[i] = temp;
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}
