/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarroco <amarroco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:48:17 by amarroco          #+#    #+#             */
/*   Updated: 2022/11/30 10:32:16 by amarroco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (!little[0])
		return ((char *)big);
	if (len == 0)
		return (NULL);
	n = ft_strlen(little);
	while (*big && n <= len--)
	{
		if (!(ft_strncmp((char *)big, (char *)little, n)))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
