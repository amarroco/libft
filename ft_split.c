/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarroco <amarroco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:46:51 by amarroco          #+#    #+#             */
/*   Updated: 2022/11/28 03:48:26 by amarroco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_free(char **d, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (i <= ft_count(s, c))
		free(d[i++]);
	free(d);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**d;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	d = (char **)ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!d)
		return (NULL);
	while (i < ft_count(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		d[i] = ft_substr(s, start, end - start);
		if (!d[i++])
			return (ft_free(d, s, c));
		start = end;
	}
	return (d);
}
