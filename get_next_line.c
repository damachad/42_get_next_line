/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:09:58 by damachad          #+#    #+#             */
/*   Updated: 2023/05/19 14:09:01 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *read_line)
{
	char	*buff;
	int		r_bytes;

	r_bytes = 1;
	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	while (r_bytes > 0 && !ft_strchr(read_line, '\n'))
	{
		r_bytes = read(fd, buff, BUFFER_SIZE);
		if (r_bytes == -1)
		{
			free(buff);
			free(read_line);
			return (NULL);
		}
		buff[r_bytes] = '\0';
		read_line = ft_strjoin(read_line, buff);
	}
	free(buff);
	return (read_line);
}

char	*get_next_line(int fd)
{
	static char	*read_line;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 256)
		return (NULL);
	read_line = ft_read(fd, read_line);
	if (!read_line)
		return (NULL);
	line = ft_get_line(read_line);
	read_line = remain_text(read_line);
	return (line);
}
