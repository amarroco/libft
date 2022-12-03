/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarroco <amarroco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 00:46:52 by amarroco          #+#    #+#             */
/*   Updated: 2022/11/28 05:33:09 by amarroco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen((char *)s));
	i = 0;
	while (s[i] && --size)
	{
		d[i] = (char)(s[i]);
		i++;
	}
	d[i++] = 0;
	return (ft_strlen((char *)s));
}
