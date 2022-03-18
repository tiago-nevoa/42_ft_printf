/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:48:42 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/18 18:24:07 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putunsigned_fd(unsigned int n, int fd)
{
	int	counter;

	counter = 0;
	if (n >= 0 && n < 10)
	{
		n = n + '0';
		ft_putchar_fd(n, fd);
		counter++;
	}
	else
	{
		ft_putunsigned_fd(n / 10, fd);
		n = n % 10 + '0';
		ft_putchar_fd(n, fd);
		counter++;
	}
	return (counter);
}
