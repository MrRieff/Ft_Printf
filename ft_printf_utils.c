/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualbuqu <lualbuqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:09:02 by lualbuqu          #+#    #+#             */
/*   Updated: 2024/05/30 14:38:58 by lualbuqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	unsigned int	len;


	if (!str)
		return (write(1, "(null)", 6));
	len = 0;
	while (str[len])
	{
		ft_putchar(str[len]);
		len++;
	}
	return (len);
}

int	ft_putnbr(long long int number)
{
	int	len;

	len = ft_div_num_base(number, 10);
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
		ft_putnbr(number);
	}
	else if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
		ft_putchar(number + '0');
	return (len);
}

int	ft_putnbr_u(unsigned long long int number)
{
	int	len;

	len = ft_div_num_base(number, 10);
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		number += '0';
		write(1, &number, 1);
	}
	return (len);
}
