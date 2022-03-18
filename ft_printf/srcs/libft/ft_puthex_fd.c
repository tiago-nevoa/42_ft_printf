/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:26:48 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/18 18:23:46 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_puthex_fd(unsigned int n, int flag, int fd)
{
	int	counter;

	counter = 0;
	if (n >= 16)
		ft_puthex_fd(n / 16, flag, fd);
	if (flag == 'X')
	{
		ft_putchar_fd("0123456789ABCDEF"[n % 16], fd);
		counter++;
	}
	else
	{
		ft_putchar_fd("0123456789abcdef"[n % 16], fd);
		counter++;
	}
	return (counter);
}
