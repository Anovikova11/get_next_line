/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 13:20:19 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/13 20:46:11 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_fill_array(char **s1, const char *s, char c)
{
	int i;
	int j;
	int r;
	int len;

	i = 0;
	r = 0;
	while (r < ft_word_count(s, c))
	{
		j = 0;
		while (s[i] == c)
			i++;
		len = ft_word_len(s, c, i);
		s1[r] = (char *)malloc(sizeof(char) * (len + 1));
		while (j < len)
		{
			s1[r][j] = s[i++];
			j++;
		}
		s1[r][j] = '\0';
		r++;
	}
	s1[r] = NULL;
	return (s1);
}
