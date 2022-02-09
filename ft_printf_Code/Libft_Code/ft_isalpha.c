/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:22:43 by tferreir          #+#    #+#             */
/*   Updated: 2021/11/24 17:52:50 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
int	main(void)
{
	char	c;

	c = 0;
	while (c <= 126)
	{
		if (ft_isalpha(c))
			printf("c = %c -> is Alpha\n", c);
		else
			printf("c = %c -> NOT NOT NOT Alpha\n", c);
		c++;
	}
}
*/
