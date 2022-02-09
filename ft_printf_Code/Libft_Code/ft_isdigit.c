/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:33:33 by tferreir          #+#    #+#             */
/*   Updated: 2021/11/24 17:53:55 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}
/*
int	main(void)
{
	char	c;

	c = 0;
	while (c <= 126)
	{
		if (ft_isdigit(c))
			printf("c = %c -> is Digit\n", c);
		else
			printf("c = %c -> NOT NOT NOT Digit \n", c);
		c++;
	}
}
*/
