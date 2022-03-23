/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:48:42 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/23 20:00:10 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	putunsigned(unsigned int n, int fd, int *counter)
{
	if (n >= 0 && n < 10)
	{
		n = n + '0';
		*counter += ft_putchar_fd(n, fd);
	}
	else
	{
		putunsigned(n / 10, fd, counter);
		n = n % 10 + '0';
		*counter += ft_putchar_fd(n, fd);
	}
}

int	ft_putunsigned_fd(unsigned int n, int fd)
{
	int	counter;

	counter = 0;
	putunsigned(n, fd, &counter);
	return (counter);
}
