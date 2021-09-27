/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_nums2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:23:00 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/27 13:46:20 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pass_to_a(t_nums *a, t_nums *b)
{
	int	index;
	int	biggest_num;
	int	pos;

	index = 1;
	biggest_num = b->array[0];
	while (index < b->len)
	{
		if (b->array[index] > biggest_num)
		{
			biggest_num = b->array[index];
			pos = index;
		}
		index++;
	}
	while (biggest_num != b->array[0])
	{
		if (biggest_num == b->array[1])
			sb(b);
		else if (pos < b->len / 2)
			rb(b);
		else
			rrb(b);
	}
	pa(a, b);
}
