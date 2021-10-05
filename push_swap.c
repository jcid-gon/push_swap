/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:22:14 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/30 12:34:43 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(void)
{	
	write(2, "Error\n", 6);
	exit (0);
}

void	is_ordered(t_nums *a)
{
	int	result;
	int	i;
	int	i2;

	result = 0;
	i = 0;
	while (i < a->len)
	{
		i2 = i + 1;
		while (i2 < a->len)
		{
			if (a->array[i] > a->array[i2])
				result = 1;
			i2++;
		}
		i++;
	}
	if (result == 0)
		exit (0);
}

void	array_creator(int argc, char **argv, t_nums *a, t_nums *b)
{
	char	**temp;

	if (argc == 2)
	{
		if (ft_strlen(argv[1]) < 2)
			exit (0);
		temp = ft_split(argv[1], ' ');
		a->array = malloc((ft_strlen(argv[1]) + 1) * sizeof(int));
		b->array = malloc((ft_strlen(argv[1]) + 1) * sizeof(int));
		while (temp[a->len])
		{
			number_inclusion(a, temp[a->len]);
			a->len++;
		}	
	}
	else
	{
		a->array = malloc((argc + 1) * sizeof(int));
		b->array = malloc((argc + 1) * sizeof(int));
		while (a->len < argc - 1)
		{
			number_inclusion(a, argv[a->len + 1]);
			a->len++;
		}
	}
}

int	main(int argc, char **argv)
{
	t_nums	a;
	t_nums	b;

	a.len = 0;
	b.len = 0;
	number_check(argv);
	array_creator(argc, argv, &a, &b);
	repeat_check(&a);
	is_ordered(&a);
	if (a.len == 2)
		two_nums(&a);
	else if (a.len == 3)
		three_nums(&a);
	else if (a.len <= 5 && a.len > 3)
		five_nums (&a, &b);
	else if (a.len > 5)
		hundred_numbers(&a, &b);
}
