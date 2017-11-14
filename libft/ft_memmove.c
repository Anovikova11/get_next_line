/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 18:55:46 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/02 18:55:50 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = -1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d)
		while (len-- > 0)
			*(d + len) = *(s + len);
	else
		while (++i < len)
			*(d + i) = *(s + i);
	return (dst);
}
