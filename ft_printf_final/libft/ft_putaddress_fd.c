/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:59:42 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/18 17:30:55 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// counter return on recursive algoritm

int	ft_putaddress_fd(unsigned long n, int tag, int fd)
{
	if (!tag)
	{
		ft_putstr_fd("0x", fd);
		tag = 2;
	}
	if (n >= 16)
	{
		ft_putaddress_fd(n / 16, tag, fd);
		ft_putaddress_fd(n % 16, tag, fd);
	}
	else
	{
		tag += ft_putchar_fd("0123456789abcdef"[n % 16], fd);
	}
	return (tag);
}
