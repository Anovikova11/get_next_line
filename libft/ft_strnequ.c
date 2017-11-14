/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 14:24:16 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/06 14:24:19 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	while (s1[i] && s2[i] && n != 0)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
		n--;
	}
	return (1);
}
