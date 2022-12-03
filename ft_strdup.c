/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarroco <amarroco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:06:02 by amarroco          #+#    #+#             */
/*   Updated: 2022/11/22 21:41:32 by amarroco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;

	d = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!d)
		return (NULL);
	i = 0;
	while (s[i++])
		d[i - 1] = s[i - 1];
	return (d);
}
