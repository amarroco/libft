/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarroco <amarroco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:28:19 by amarroco          #+#    #+#             */
/*   Updated: 2022/11/30 10:39:19 by amarroco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest < src)
	{
		while (i++ != n)
			*(char *)(dest + i - 1) = *(char *)(src + i - 1);
	}
	if (src < dest)
	{
		while (n-- != 0)
			*(char *)(dest + n) = *(char *)(src + n);
	}
	return (dest);
}
