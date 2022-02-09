/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:36:39 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/16 15:15:26 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long	n;
	int		sign;

	n = 0;
	sign = 1;
	while (isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (sign * (int)n);
}
/*
int	main(void)
{
	const char	*str = "  			10012df34567";
	int			i;

	i = ft_atoi(str);
	printf("str = <%s>;\nft_atoi(str) = <%d>\n", str, i);
	i = atoi(str);
	printf("str = <%s>;\natoi(str) = <%d>", str, i);
}
*/
