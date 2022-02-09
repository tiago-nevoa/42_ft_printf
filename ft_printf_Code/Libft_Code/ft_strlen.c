/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:39:26 by tferreir          #+#    #+#             */
/*   Updated: 2021/11/24 18:53:35 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}
/*
int	main(void)
{
	char	*s;

	s = "123456";
	printf("The String s = %s\n", s);
	printf("s lenght is = %zu", ft_strlen(s));
}
*/
