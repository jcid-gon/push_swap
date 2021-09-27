/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:00:58 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/21 13:01:03 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_nums *a, t_nums *b)
{
	int	index;

	index = b->len;
	while (index > 0)
	{
		b->array[index] = b->array[index - 1];
		index--;
	}
	b->array[0] = a->array[0];
	while (index <= a->len)
	{
		a->array[index] = a->array[index + 1];
		index++;
	}
	b->len++;
	a->len--;
	write(1, "pb\n", 3);
}

void	pa(t_nums *a, t_nums *b)
{
	int	index;

	index = a->len;
	while (index > 0)
	{
		a->array[index] = a->array[index - 1];
		index--;
	}
	a->array[0] = b->array[0];
	while (index <= b->len)
	{
		b->array[index] = b->array[index + 1];
		index++;
	}
	a->len++;
	b->len--;
	write(1, "pa\n", 3);
}
