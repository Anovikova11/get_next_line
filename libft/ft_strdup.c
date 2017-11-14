/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:51:50 by alnoviko          #+#    #+#             */
/*   Updated: 2017/09/21 18:40:14 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dupstr;
	int		i;
	int		j;

	j = 0;
	i = 0;
	dupstr = (char*)malloc(sizeof(char) * ft_strlen((char*)s1) + 1);
	if (!dupstr)
		return (NULL);
	while (s1[i] != '\0')
		dupstr[j++] = s1[i++];
	dupstr[j] = '\0';
	return (dupstr);
}
