/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:09:58 by damachad          #+#    #+#             */
/*   Updated: 2023/05/12 12:41:31 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	*read_text;
	char		*buff;
	int			r_bytes;

	r_bytes = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	while (r_bytes != 0 && !ft_strchr(read_text, '\n'))
	{
		r_bytes = read(fd, buff, BUFFER_SIZE);
		if (r_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[r_bytes] = '\0';
		read_text = ft_strjoin(read_text, buff);
	}
	free(buff);
	buff = ft_get_line(read_text);
	read_text = remain_text(read_text);
	return (buff);
}
