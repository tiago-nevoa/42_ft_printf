/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:29:51 by tferreir          #+#    #+#             */
/*   Updated: 2021/11/30 16:02:50 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len-- > 0)
		*ptr++ = c;
	return (b);
}
/*
int	main(void)
{
	char	b[50] = "abdzA62~";

	printf("The String b = %s\n", b);
	printf("The String b = %s\n", ft_memset(b, '@', 2));
}
*/
