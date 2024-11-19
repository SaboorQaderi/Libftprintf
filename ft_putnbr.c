/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:21:26 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/19 14:38:38 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int fd, int *count)
{
	if (n == -2147483648)
	{
		ft_putchar('-', fd);
		(*count)++;
		ft_putstr("2147483648");
		*count += 10;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', fd);
		(*count)++;
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10, fd, count);
	ft_putchar((n % 10) + '0', fd);
	(*count)++;
}
