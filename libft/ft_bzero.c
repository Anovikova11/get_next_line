/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 19:41:12 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/01 19:41:14 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*sp;

	sp = (char *)s;
	i = 0;
	if (n)
	{
		while (i < n)
		{
			*(sp + i) = 0;
			i++;
		}
	}
}