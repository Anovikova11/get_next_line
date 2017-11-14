/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 20:20:24 by alnoviko          #+#    #+#             */
/*   Updated: 2017/09/21 20:22:04 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncat() function appends not more than n characters from s2
** to the end of s1, then adds a terminating `\0'. Returns the pointer s1.
*/

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	int		j;
	size_t	c;

	i = 0;
	j = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[j] != '\0') && (c < n))
	{
		dest[i] = src[j];
		i++;
		j++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
