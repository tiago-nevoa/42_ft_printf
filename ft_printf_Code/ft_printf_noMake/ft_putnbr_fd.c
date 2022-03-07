/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago_nevoa <tiago_nevoa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:41:19 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/07 15:32:55 by tiago_nevoa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Negative binary & Hexa
// Counter printf & ft_printft

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int counter;

	counter = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return (11);
		}
		ft_putchar_fd('-', fd);
		++counter;
		n = -n;
	}
	if (n >= 0 && n < 10)
	{
		n = n + '0';
		ft_putchar_fd(n, fd);
		++counter;
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10 + '0';
		ft_putchar_fd(n, fd);
		++counter;
	}
	return (counter);
}
