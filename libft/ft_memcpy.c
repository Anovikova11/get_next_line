/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 20:35:08 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/10 01:07:44 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	int				i;

	i = 0;
	d = dst;
	s = src;
	while (i < (int)n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
