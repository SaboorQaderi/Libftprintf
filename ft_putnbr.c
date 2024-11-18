/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:21:26 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/18 16:53:23 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int fd, int *count)
{
	if (n == -2147483648)
	{
		*count += ft_putstr("-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		*count += ft_putchar('-', fd);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10, fd, count);
	*count += ft_putchar((n % 10) + '0', fd);
}
