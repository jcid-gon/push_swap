/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_nums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:22:48 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/27 13:56:00 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pass_from_pivot(t_nums *a, t_nums *b, int index)
{
	int	temp;

	if (index < a->len / 2)
	{
		temp = 0;
		while (temp < index)
		{
			ra(a);
			temp++;
		}
	}
	else
	{
		temp = a->len - index;
		while (temp > 0)
		{
			rra(a);
			temp--;
		}
	}
	pb(a, b);
}

void	pass_middle(t_nums *a, t_nums *b, int mid_point)
{
	int	index;
	int	index2;

	index = 0;
	index2 = a->len - 1;
	while (index < a->len && index2 > 0)
	{
		if (a->array[index] >= mid_point)
		{
			pass_from_pivot(a, b, index);
			index = 0;
			index2 = a->len - 1;
		}
		if (a->array[index2] >= mid_point)
		{
			pass_from_pivot(a, b, index2);
			index = 0;
			index2 = a->len - 1;
		}
		index++;
		index2--;
	}
}

int	*sort_a(int *array, t_nums *a)
{
	int	index;
	int	temp;

	index = 0;
	while (index < a->len - 2)
	{
		if (array[index] > array[index + 1])
		{
			temp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = temp;
			index = 0;
		}
		else
			index++;
	}
	temp = 0;
	return (array);
}

int	calculate_mid(t_nums *a)
{
	int	*sorted_a;
	int	index;
	int	ret;

	index = 0;
	sorted_a = malloc((a->len + 1) * sizeof(int));
	while (index < a->len)
	{
		sorted_a[index] = a->array[index];
		index++;
	}
	sorted_a = sort_a(sorted_a, a);
	if (index > 100)
		ret = (sorted_a[index - 50]);
	else if (index > 40)
		ret = (sorted_a[index - 20]);
	else
		ret = (sorted_a[index / 2]);
	free(sorted_a);
	return (ret);
}

void	hundred_numbers(t_nums *a, t_nums *b)
{
	while (a->len >= 3)
		pass_middle(a, b, calculate_mid(a));
	if (a->array[0] > a->array[1])
		sa(a);
	while (b->len > 0)
		pass_to_a(a, b);
	while (a->array[0] > a->array[a->len - 1])
		rra(a);
}
