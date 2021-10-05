/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_numbers2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:48:46 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/30 12:50:29 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	last_rotator(t_nums *a, int pos)
{
	if (pos <= (a->len / 2) - 1)
	{
		while (a->array[a->len - 1] < a->array[0])
			rra(a);
	}
	else
	{
		while (a->array[a->len - 1] < a->array[0])
			ra(a);
	}
}
