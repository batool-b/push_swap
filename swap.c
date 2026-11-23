/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbaras <balbaras@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 12:35:06 by balbaras          #+#    #+#             */
/*   Updated: 2026/11/23 12:50:44 by balbaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sa(t_stack *a)
{
	int	temp;

	if (a->size < 2)
		return ;
	temp = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = temp;
}

void	sb(t_stack *b)
{
	int	temp;

	if (b->size < 2)
		return ;
	temp = b->array[0];
	b->array[0] = b->array[1];
	b->array[1] = temp;
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
