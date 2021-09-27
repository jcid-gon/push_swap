/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:07:38 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/27 12:44:16 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	repeat_check(t_nums *a)
{
	int	i;
	int	i2;

	i2 = 0;
	i = 0;
	while (a->array[i])
	{
		while (i > i2)
		{
			if (a->array[i] == a->array[i2])
				error_message();
			i2++;
		}
		i2 = 0;
		i++;
	}
}

void	extra_check(char **argv, int i, int i2)
{
	if (argv[i][i2] != '-' && argv[i][i2] != ' ')
		error_message();
	else if (argv[i][i2] == '-')
	{
		if (argv[i][i2 + 1] < '0' || argv[i][i2 + 1] > '9')
			error_message();
		if (i2 != 0 && argv[i][i2 - 1] != ' ')
			error_message();
	}
	else if (argv[i][i2] == ' ' && i != 1)
		error_message();
}

void	number_check(char **argv)
{
	int	i;
	int	i2;

	i = 1;
	i2 = 0;
	while (argv[i])
	{
		while (argv[i][i2])
		{
			if (argv[i][i2] < '0' || argv[i][i2] > '9')
				extra_check(argv, i, i2);
			i2++;
		}
		i2 = 0;
		i++;
	}
}

void	number_inclusion(t_nums *a, char *c)
{
	long	temp;

	if (ft_strlen(c) > 12)
		error_message();
	temp = ft_atoi(c);
	if (temp > 2147483647 || temp < -2147483648)
		error_message();
	else
		a->array[a->len] = (int)temp;
}
