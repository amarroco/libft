/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarroco <amarroco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 05:29:18 by amarroco          #+#    #+#             */
/*   Updated: 2022/11/28 06:03:14 by amarroco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t size)
{
	size_t	len;
	size_t	i;

	if (size == 0)
		return (ft_strlen(s));
	len = 0;
	while (len < ft_strlen(d) && len < size)
		len++;
	i = len;
	while (i < size - 1 && s[i - len])
	{
		d[i] = s[i - len];
		i++;
	}
	if (len < size)
		d[i] = 0;
	return (len + ft_strlen(s));
}
