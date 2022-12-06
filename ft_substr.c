/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarroco <amarroco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:15:08 by amarroco          #+#    #+#             */
/*   Updated: 2022/12/06 04:37:07 by amarroco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	d = (char *)ft_calloc(len + 1, sizeof(char));
	if (!d)
		return (NULL);
	while (i < len && start < ft_strlen(s))
		d[i++] = s[start++];
	return (d);
}
