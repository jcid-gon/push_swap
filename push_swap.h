/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:50:28 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/27 12:07:45 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"
# include <stdlib.h>

typedef struct s_nums{
	int	*array;
	int	len;
}				t_nums;

void	sb(t_nums *b);
void	sa(t_nums *a);
void	ss(t_nums *a, t_nums *b);
void	pa(t_nums *a, t_nums *b);
void	pb(t_nums *a, t_nums *b);
void	ra(t_nums *a);
void	rb(t_nums *b);
void	rr(t_nums *a, t_nums *b);
void	rra(t_nums *a);
void	rrb(t_nums *b);
void	rrr(t_nums *a, t_nums *b);

void	last_sort(t_nums *a);
void	merge_nums(t_nums *a, t_nums *b);
void	two_nums(t_nums *a);
void	three_nums(t_nums *a);
void	five_nums(t_nums *a, t_nums *b);

void	pass_to_a(t_nums *a, t_nums *b);
void	pass_from_pivot(t_nums *a, t_nums *b, int index);
void	pass__middle(t_nums *a, t_nums *b, int mid_point);
int		*sort_a(int *array, t_nums *a);
int		calculate_mid(t_nums *a);
void	hundred_numbers(t_nums *a, t_nums *b);

void	repeat_check(t_nums *a);
void	extra_check(char **argv, int i, int i2);
void	number_check(char **argv);
void	number_inclusion(t_nums *a, char *c);

void	array_creator(int argc, char **argv, t_nums *a, t_nums *b);
void	error_message(void);

#endif
