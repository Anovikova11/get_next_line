/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:49:32 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/02 16:49:35 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	const char		*s;
	size_t			i;
	unsigned char	c2;

	i = 0;
	d = dst;
	s = src;
	c2 = (unsigned char)c;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == c2)
			return (&d[i + 1]);
		i++;
	}
	return (NULL);
}
