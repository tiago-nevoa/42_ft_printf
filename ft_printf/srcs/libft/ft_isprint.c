/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:53:20 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/18 18:23:31 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(void)
{
	char	c;

	c = 0;
	while (c <= 126)
	{
		if (ft_isprint(c))
			printf("c = %c -> is Printable \n", c);
		else
			printf("c = %c -> NOT NOT NOT PRINTABLE \n", c);
		c++;
	}
}
*/
