/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 17:55:53 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/13 17:22:46 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**s1;
	int		words;

	if (s == NULL)
		return (NULL);
	words = ft_word_count(s, c);
	s1 = (char **)ft_memalloc(sizeof(char*) * (words + 1));
	if (s1 == NULL)
		return (NULL);
	s1 = ft_fill_array(s1, s, c);
	return (s1);
}
