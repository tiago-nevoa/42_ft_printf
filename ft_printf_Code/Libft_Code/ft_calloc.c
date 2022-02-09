/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:02:44 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/21 17:23:49 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(size * count);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
/*
int	main(void)
{
	char	*str;

	str = calloc(4, sizeof(char));
	str = "ABCD";
	printf("String <%s>\n", str);
}
*/
