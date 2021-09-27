/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:32:18 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/21 13:35:30 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_nums *a, t_nums *b)
{
	int	index;
	int	temp;

	index = 0;
	temp = a->array[index];
	while (index < a->len - 1)
	{
		a->array[index] = a->array[index + 1];
		index++;
	}
	a->array[index] = temp;
	index = 0;
	temp = b->array[index];
	while (index < b->len - 1)
	{
		b->array[index] = b->array[index + 1];
		index++;
	}
	b->array[index] = temp;
	write(1, "rr\n", 3);
}

void	rb(t_nums *b)
{
	int	index;
	int	temp;

	index = 0;
	temp = b->array[index];
	while (index < b->len - 1)
	{
		b->array[index] = b->array[index + 1];
		index++;
	}
	b->array[index] = temp;
	write(1, "rb\n", 3);
}

void	ra(t_nums *a)
{
	int	index;
	int	temp;

	index = 0;
	temp = a->array[index];
	while (index < a->len - 1)
	{
		a->array[index] = a->array[index + 1];
		index++;
	}
	a->array[index] = temp;
	write(1, "ra\n", 3);
}
