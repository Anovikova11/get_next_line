/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 19:54:29 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/05 19:54:32 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 1. If little is an empty string, big is returned;
** 2. If big exists, iterate throug big with i++ until Little is met.
** 3. When l[j] is met iterate through Little with j++ until the end of l[j].
** 4. When l[j] ends, break if i > len.
** 5. If little occurs nowhere in big, NULL is returned; otherwise a pointer
** to the first character of the first occurrence of little is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;
	int a;
	int b;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char*)big);
	while (big[i] != '\0' && len != 0)
	{
		a = i;
		j = 0;
		b = len + 1;
		while (big[a] == little[j] && b--)
		{
			a++;
			j++;
			if (little[j] == '\0')
				return ((char*)big + i);
		}
		i++;
		len--;
	}
	return (NULL);
}
