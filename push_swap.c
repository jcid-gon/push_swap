/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:22:14 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/27 12:42:43 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(void)
{	
	write(2, "Error\n", 6);
	exit (0);
}

void	array_creator(int argc, char **argv, t_nums *a, t_nums *b)
{
	char	**temp;

	if (argc == 2)
	{
		if (ft_strlen(argv[1]) < 2)
			error_message();
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
	if (argc < 2)
		error_message();
	number_check(argv);
	array_creator(argc, argv, &a, &b);
	repeat_check(&a);
	if (a.len < 2)
		error_message();
	if (a.len == 2)
		two_nums(&a);
	else if (a.len == 3)
		three_nums(&a);
	else if (a.len <= 5)
		five_nums (&a, &b);
	else
		hundred_numbers(&a, &b);
}
