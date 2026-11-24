/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbaras <balbaras@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:22:33 by balbaras          #+#    #+#             */
/*   Updated: 2026/11/24 16:26:22 by balbaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ra(t_stack *a)
{
	int	temp;
	int	i;

	i = 0;
	if (a->size < 2)
		return ;
	temp = a->array[0];
	while (i < a->size - 1)
	{
		a->array[i] = a->array[i + 1];
		i++;
	}
	a->array[i] = temp;
}

void	rb(t_stack *b)
{
	int	temp;
	int	i;

	i = 0;
	if (b->size < 2)
		return ;
	temp = b->array[0];
	while (i < b->size - 1)
	{
		b->array[i] = b->array[i + 1];
		i++;
	}
	b->array[i] = temp;
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}
