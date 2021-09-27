/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:37:52 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/21 13:37:58 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_nums *a, t_nums *b)
{
	int	index;
	int	temp;

	index = a->len - 1;
	temp = a->array[index];
	while (index > 0)
	{
		a->array[index] = a->array[index - 1];
		index--;
	}
	a->array[index] = temp;
	index = b->len - 1;
	temp = b->array[index];
	while (index > 0)
	{
		b->array[index] = b->array[index - 1];
		index--;
	}
	b->array[index] = temp;
	write(1, "rrr\n", 4);
}

void	rrb(t_nums *b)
{
	int	index;
	int	temp;

	index = b->len - 1;
	temp = b->array[index];
	while (index > 0)
	{
		b->array[index] = b->array[index - 1];
		index--;
	}
	b->array[index] = temp;
	write(1, "rrb\n", 4);
}

void	rra(t_nums *a)
{
	int	index;
	int	temp;

	index = a->len - 1;
	temp = a->array[index];
	while (index > 0)
	{
		a->array[index] = a->array[index - 1];
		index--;
	}
	a->array[index] = temp;
	write(1, "rra\n", 4);
}
