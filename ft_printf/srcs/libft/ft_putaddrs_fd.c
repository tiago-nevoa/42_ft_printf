/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddrs_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:59:42 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/21 15:18:48 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	putaddrs(unsigned long n, int fd, int *counter)
{
	if (n >= 16)
	{
		putaddrs(n / 16, fd, counter);
		putaddrs(n % 16, fd, counter);
	}
	else
	{
		*counter += ft_putchar_fd("0123456789abcdef"[n % 16], fd);
	}
}

int	ft_putaddrs_fd(unsigned long n, int fd)
{
	int	counter;

	counter = 0;
	counter += ft_putstr_fd("0x", fd);
	putaddrs(n, fd, &counter);
	return (counter);
}
