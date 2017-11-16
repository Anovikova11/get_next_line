/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 22:18:16 by alnoviko          #+#    #+#             */
/*   Updated: 2017/11/14 15:43:21 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** function that returns a line read from a file descriptor.
** The first parameter is the file descriptor that will be used to read.
** The second parameter is the address of a pointer to a character that will
be used to save the line read from the file descriptor.
** The return value can be 1, 0 or -1 depending on whether a line has been
read, when the reading has been completed, or if an error has happened.
** get_next_line must return its result without ’\n’.

** 1. Read the whole test file, and store into a string.
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

/*
** 2. Go through string and find the first new line.
** 3. Set pointer to '\0' in order to copy first found line to the buf.
** First found line = *line = part of string before '\0'.
** 3. Set a pointer to the begining of second line to skip first found line.
** 4. Itarate through string again to find a second line, ending with '\n'.
** 4. What to do with OEF? *line = str[fd]
*/

int	get_next_line(const int fd, char **line)
{
	static char 	*string;
	char 			*pointer;
	char 			*tmp;
	
	if (ft_read_file(fd, &string) < 0 || !line || !BUFF_SIZE)
		return (-1);
	if (*string && (pointer = ft_strchr(string, '\n'))) //take a part after first nl, and set a pointer to the first newline
	{
		tmp = string;
		*pointer = '\0';
		*line = ft_strdup(string); //copy result before first newline to a line.
		string = ft_strdup(pointer + 1); //copy result starting from first char of the second line.
		ft_strdel(&tmp);
		return (1);
	}
	else if (*string && (pointer = ft_strchr(string, '\0')))
	{
		// tmp = string;
		*line = ft_strdup(string); //copy result before EOF to a line.
		string = ft_strdup(pointer);
		// ft_strdel(&tmp);
		return (1);
	}
	return (0);
}
