/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago_nevoa <tiago_nevoa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:56:18 by tiago_nevoa       #+#    #+#             */
/*   Updated: 2022/03/06 13:06:37 by tiago_nevoa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base_fd(int n, char *base, int fd)
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
	if (n >= 0 && n < ft_strlen(base))
	{
		n = n + '0';
		ft_putchar_fd(base[n], fd);
		++counter;
	}
	else
	{
		ft_putnbr_base_fd(n / 10, fd);
		n = n % 10 + '0';
		ft_putchar_fd(n, fd);
		++counter;
	}
	return (counter);
}
