/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:36:19 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/21 13:36:21 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_nums *b)
{
	int	temp;

	temp = b->array[0];
	b->array[0] = b->array[1];
	b->array[1] = temp;
	write(1, "sb\n", 3);
}

void	sa(t_nums *a)
{
	int	temp;

	temp = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = temp;
	write(1, "sa\n", 3);
}

void	ss(t_nums *a, t_nums *b)
{
	int	temp;

	temp = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = temp;
	temp = b->array[0];
	b->array[0] = b->array[1];
	b->array[1] = temp;
	write(1, "ss\n", 3);
}
