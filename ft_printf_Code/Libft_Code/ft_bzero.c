/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:44:49 by tferreir          #+#    #+#             */
/*   Updated: 2021/11/30 18:51:16 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(void)
{
	char	b[50] = "1584994258";

	printf("The String b = %s\n", b);
	ft_bzero(b, 3);
	printf("The String b = %s\n", b);
	bzero(b, 3);
	printf("The String b = %s\n", b);
}
*/
