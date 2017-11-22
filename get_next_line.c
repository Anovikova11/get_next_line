/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 21:00:46 by alnoviko          #+#    #+#             */
/*   Updated: 2017/11/21 17:32:53 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** 1. Open and read the test file, store it into a string.
** 2. Copy buf to create a string if there is none before.
** 3. Add next characters, if buf = 8, then 8 chars.
** 4. Set buf to 0, so there are no more chars left in the buf.
** 5. buf = string whith a size of BUFF_SIZE.
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
			*string = ft_strdup(buf);
		else
		{
			tmp = *string;
			*string = ft_strjoin(*string, buf);
			ft_strdel(&tmp);
		}
		ft_bzero(buf, BUFF_SIZE);
	}
	ft_strdel(&buf);
	return (ret);
}

/*
** 1. Find fisrt nl.
** 2. Set a pointer to '\0' in order to make it an end of the first found line.
** 3. Copy result to a line. Result = 1st found line = part before '\0' = *line.
** 4. Copy following line starting from the first char of the next line.
** 5. If no nl, but string exists, you will get the EOF.
** 6. Copy result before EOF to a line, return (1), otherwise (0).
*/

int	get_next_line(const int fd, char **line)
{
	static char	*string[5000];
	char		*pointer;
	char		*tmp;

	if (ft_read_file(fd, &string[fd]) < 0 || !line || !BUFF_SIZE)
		return (-1);
	if ((pointer = ft_strchr(string[fd], '\n')))
	{
		tmp = string[fd];
		*pointer = '\0';
		*line = ft_strdup(string[fd]);
		string[fd] = ft_strdup(pointer + 1);
		ft_strdel(&tmp);
		return (1);
	}
	else if (*string[fd])
	{
		*line = ft_strdup(string[fd]);
		string[fd] = ft_strnew(0);
		return (1);
	}
	return (0);
}
