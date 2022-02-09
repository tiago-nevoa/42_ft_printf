/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:45:14 by tferreir          #+#    #+#             */
/*   Updated: 2021/11/30 18:05:16 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	char	c;

	c = 0;
	while (c <= 126)
	{
		if (ft_isascii(c))
			printf("c = %c -> is ASCII \n", c);
		else
			printf("c = %c -> NOT NOT NOT ASCII \n", c);
		c++;
	}
}
*/
