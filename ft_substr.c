/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarroco <amarroco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:15:08 by amarroco          #+#    #+#             */
/*   Updated: 2022/12/07 08:43:16 by amarroco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	d = (char *)ft_calloc(len + 1, sizeof(char));
	if (!d)
		return (NULL);
	while (i < len && start < ft_strlen(s) + 1)
		d[i++] = s[start++];
	return (d);
}
