/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 19:50:33 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/02 19:50:36 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*s1;
	unsigned char	c1;

	i = 0;
	s1 = (unsigned char*)s;
	c1 = (unsigned char)c;
	while (n-- > 0)
	{
		if (s1[i] == c1)
			return ((unsigned char*)(s + i));
		else if (c == '\0' && s1[i] == '\0')
			return ((unsigned char*)(s + i));
		i++;
	}
	return (NULL);
}
