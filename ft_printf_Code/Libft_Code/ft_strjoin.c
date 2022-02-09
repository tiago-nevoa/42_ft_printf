/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:23:54 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/21 18:00:51 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = -1;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	p = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!p)
		return (NULL);
	while (s1[++i] != '\0')
		p[i] = s1[i];
	while (s2[++j] != '\0')
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
/*
int	main(void)
{
	const char	src1[] = "My Friends";
	const char	src2[] = " Are Awesome";
	const char	*dst;

	dst = ft_strjoin(src1, src2);
	printf("Res <%s>\n", dst);
}
*/
