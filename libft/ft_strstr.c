/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 20:10:55 by alnoviko          #+#    #+#             */
/*   Updated: 2017/09/26 20:11:17 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int a;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char*)big);
	while (big[i] != '\0')
	{
		a = i;
		j = 0;
		while (big[a] == little[j])
		{
			a++;
			j++;
			if (little[j] == '\0')
				return ((char*)big + i);
		}
		i++;
	}
	return (NULL);
}
