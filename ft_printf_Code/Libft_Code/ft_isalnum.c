/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:24:31 by tferreir          #+#    #+#             */
/*   Updated: 2021/11/30 18:51:59 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int	main(void)
{
	char	c;

	c = 0;
	while (c <= 126)
	{
		if (ft_isalnum(c))
			printf("c = %c -> is Alpha Numeric \n", c);
		else
			printf("c = %c -> NOT NOT NOT Alpha Numeric \n", c);
		c++;
	}
}
*/
