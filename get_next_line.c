/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stuff.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 21:00:46 by alnoviko          #+#    #+#             */
/*   Updated: 2017/11/16 21:00:49 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** 1. Open and read the test file, store it into a string.
*/

int	ft_read_file(int fd, char **string)
{
	char	*buf;
	char	*tmp;
	int		ret;

	buf = ft_strnew(BUFF_SIZE + 1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (*string == NULL)
			*string = ft_strdup(buf); //copy buf to create a string if there is none before
		else
		{
			tmp = *string;
			*string = ft_strjoin(*string, buf); // add next characters, if buf = 8, then 8 chars
			ft_strdel(&tmp);
		}
		ft_bzero(buf, BUFF_SIZE); // set buf to 0, so there are no more chars left in the buf.
	}
	ft_strdel(&buf);
	return (ret);
}


int	get_next_line(const int fd, char **line)
{
	static char 	*string[5000]; //array of 5000 strings(lines, slots)
	char 			*pointer;
	char 			*tmp; // *tmp = sasha, tmp[fd] = sasha, tmp[fd][0] = s
	
	if (ft_read_file(fd, &string[fd]) < 0 || !line || !BUFF_SIZE)
		return (-1);
	
	if ((pointer = ft_strchr(string[fd], '\n'))) //return where fisrt nl is
	{
		tmp = string[fd];
		*pointer = '\0'; //set an end of the first line 
		*line = ft_strdup(string[fd]); //copy result before first newline to a line.
		string[fd] = ft_strdup(pointer + 1); //copy result starting from first char of the second line.
		ft_strdel(&tmp);
		return (1);
	}
	else if (*string[fd] && (pointer = ft_strchr(string[fd], '\0'))) //if no nl, but string exists, search for the EOF.
	{
		// tmp = string;
		*line = ft_strdup(string[fd]); //copy result before EOF to a line.
		string[fd] = ft_strdup(pointer);
		// ft_strdel(&tmp);
		return (1);
	}
	return (0);
}
