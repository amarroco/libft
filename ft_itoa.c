/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarroco <amarroco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:54:23 by amarroco          #+#    #+#             */
/*   Updated: 2022/11/30 09:17:34 by amarroco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	ft_abs(long long int x)
{
	if (x < 0)
	{
		return (-x);
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char			*d;
	size_t			i;
	long long int	nb;

	i = 1;
	nb = (long long int)n;
	while (nb > 9 || nb < 0)
	{
		nb /= 10;
		i++;
	}
	nb = ft_abs((long long int)n);
	d = ft_calloc(i + 1, sizeof(char));
	if (!d)
		return (NULL);
	while ((n < 0 && i != 1) || (n >= 0 && i != 0))
	{
		d[--i] = (char)(ft_abs(nb) % 10 + '0');
		nb /= 10;
	}
	if (n < 0)
		d[0] = '-';
	return (d);
}
