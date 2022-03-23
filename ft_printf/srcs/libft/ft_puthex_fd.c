/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:26:48 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/23 20:06:56 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	puthex(unsigned int n, int flag, int fd, int *counter)
{
	if (n >= 16)
		puthex(n / 16, flag, fd, counter);
	if (flag == 'X')
		*counter += ft_putchar_fd("0123456789ABCDEF"[n % 16], fd);
	else
		*counter += ft_putchar_fd("0123456789abcdef"[n % 16], fd);
}

int	ft_puthex_fd(unsigned int n, int flag, int fd)
{
	int	counter;

	counter = 0;
	puthex(n, flag, fd, &counter);
	return (counter);
}
