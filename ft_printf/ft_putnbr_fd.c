/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprint_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcid-gon <jcid-gon@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 11:10:23 by jcid-gon          #+#    #+#             */
/*   Updated: 2021/09/23 13:07:46 by jcid-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ftprint_putnbr_fd(int n, int fd, int *ret)
{
	long	number;

	number = n;
	while (number < 0)
	{
		ftprint_putchar_fd ('-', fd, ret);
		number = number * -1;
	}
	if (number >= 10)
		ftprint_putnbr_fd (number / 10, fd, ret);
	ftprint_putchar_fd ((number % 10) + '0', fd, ret);
}

void	ftprint_putuns_fd(int n, int fd, int *ret)
{
	unsigned int	number;

	number = n;
	if (number >= 10)
		ftprint_putnbr_fd (number / 10, fd, ret);
	ftprint_putchar_fd ((number % 10) + '0', fd, ret);
}
