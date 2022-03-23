/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:41:19 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/23 19:56:25 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Negative binary & Hexa
// Counter printf & ft_printft
#include "../../includes/libft.h"

void	putnbr(long n, int fd, int *counter)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			*counter += ft_putstr_fd("-2147483648", fd);
			return ;
		}
		*counter += ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 0 && n < 10)
	{
		n = n + '0';
		*counter += ft_putchar_fd(n, fd);
	}
	else
	{
		putnbr(n / 10, fd, counter);
		n = n % 10 + '0';
		*counter += ft_putchar_fd(n, fd);
	}
}

int	ft_putnbr_fd(int n, int fd)
{
	int	counter;

	counter = 0;
	putnbr(n, fd, &counter);
	return (counter);
}
