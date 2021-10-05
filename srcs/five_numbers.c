/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:40:21 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/30 12:50:31 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	last_sort(t_nums *a)
{
	int	min;
	int	index;
	int	pos;

	index = 0;
	min = a->array[0];
	pos = 0;
	while (index > a->len)
	{
		if (min > a->array[index])
		{
			min = a->array[index];
			pos = index;
		}
		index++;
	}
	last_rotator(a, pos);
}

void	merge_nums(t_nums *a, t_nums *b)
{
	if (b->array[0] > a->array[a->len - 1] && b->array[0] < a->array[0])
		pa(a, b);
	else if (a->array[0] < a->array[a->len - 1] && b->array[0] < a->array[0])
		pa(a, b);
	else if (b->array[0] > a->array[0] && b->array[0] > a->array[a->len - 1])
		pa(a, b);
	else
		rra(a);
}

void	two_nums(t_nums *a)
{
	if (a->array[1] < a->array[0])
		sa(a);
}

void	three_nums(t_nums *a)
{
	if (a->array[0] > a->array[1])
	{
		if (a->array[0] > a->array[2])
			ra(a);
		else
			sa(a);
		three_nums(a);
	}
	else if (a->array[1] > a->array[2])
	{
		if (a->array[0] > a->array[2])
			rra(a);
		else
			sa(a);
		three_nums(a);
	}
}

void	five_nums(t_nums *a, t_nums *b)
{
	while (a->len > 3)
		pb(a, b);
	three_nums(a);
	if (b->array[0] < b->array[1])
		sb(b);
	while (b->len > 0)
		merge_nums(a, b);
	last_sort(a);
}
