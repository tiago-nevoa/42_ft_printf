/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:34:29 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/16 13:35:50 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;
	int		i;

	len = ft_strlen(s1);
	i = 0;
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, len + 1);
	return (p);
}
/*
int	main(void)
{
	const char	src[] = "My Friends";
	char		*dst1;
	char		*dst2;

	dst1 = ft_strdup(src);
	dst2 = strdup(src);
	printf("Res <%s>\nOri <%s>\n", dst1, dst2);
}
*/
