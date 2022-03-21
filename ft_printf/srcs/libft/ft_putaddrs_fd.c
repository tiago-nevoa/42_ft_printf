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

// return counter recursive algoritm

int	ft_putaddrs_fd(unsigned long n, int tag, int fd)
{
	if (!tag)
	{
		ft_putstr_fd("0x", fd);
		tag = 2;
	}
	if (n >= 16)
	{
		ft_putaddrs_fd(n / 16, tag, fd);
		ft_putaddrs_fd(n % 16, tag, fd);
	}
	else
	{
		ft_putchar_fd("0123456789abcdef"[n % 16], fd);
		++tag;
	}
	return (tag);
}
