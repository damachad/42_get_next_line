/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:09:58 by damachad          #+#    #+#             */
/*   Updated: 2023/05/08 15:30:25 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*line;
	int			r_bytes;
	static int	buf_pos;

	line = NULL;
	if (fd < 0)
		return (NULL);
	r_bytes = read(fd, buffer, BUFFER_SIZE);
	if (r_bytes == -1)
		return (NULL);
	line = alloc_copy_line(buffer + buf_pos, r_bytes);
	buf_pos += ft_strlen(line);
	return (line);
}
