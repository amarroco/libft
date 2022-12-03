/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarroco <amarroco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:36:22 by amarroco          #+#    #+#             */
/*   Updated: 2022/11/24 01:07:21 by amarroco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*stemp;

	stemp = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*stemp++ == (unsigned char)c)
			return ((void *)--stemp);
	}
	return (NULL);
}
