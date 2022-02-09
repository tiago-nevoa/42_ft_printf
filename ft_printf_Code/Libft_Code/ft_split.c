/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:35:57 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/21 20:02:55 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_words(char const *str, char sep)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != sep && str[i])
			i++;
		result++;
	}
	return (result);
}

static	char	*get_next_word(const char *str, int *i, char sep)
{
	int		j;
	char	*new;

	while (str[*i] == sep)
		if (str[(*i)++] == '\0')
			return (0);
	j = 0;
	while (str[*i + j] != sep && str[*i + j])
		j++;
	if (j != 0)
	{
		new = (char *)malloc(sizeof(char) * (j + 1));
		if (!new)
			return (0);
		j = 0;
		while (str[*i] != sep && str[*i])
			new[j++] = str[(*i)++];
		new[j] = '\0';
	}
	else
		return (0);
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	char	*word;
	int		*i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	list = (char **)malloc(sizeof(char *) * (str_words(s, c) + 1));
	if (!list)
		return (0);
	j = 0;
	i = &j;
	k = 0;
	while (k < str_words(s, c))
	{
		word = get_next_word(s, i, c);
		if (!word)
			break ;
		list[k++] = word;
	}
	list[k] = 0;
	return (list);
}
/*
int	main(void)
{
	char	**dest;
	int		i;

	i = 0;
	dest = ft_split("aaahey how are you aaa", 'a');
	while (dest[i])
	{
		printf("<%s>", dest[i]);
		i++;
	}
	printf("\n");
}
*/
