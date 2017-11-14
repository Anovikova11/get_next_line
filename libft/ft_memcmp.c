/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 14:25:11 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/03 14:25:14 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*s12;
	const unsigned char		*s22;
	size_t					i;

	i = 0;
	s12 = s1;
	s22 = s2;
	while (i < n)
	{
		if (s12[i] != s22[i])
			return (s12[i] - s22[i]);
		i++;
	}
	return (0);
}
