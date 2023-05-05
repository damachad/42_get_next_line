/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:09:58 by damachad          #+#    #+#             */
/*   Updated: 2023/05/05 11:03:44 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*line;
	ssize_t	bytes;

	if (fd < 0)
		return (NULL);
	while (bytes > 0)
	{
		bytes = read(fd, line, 10);
		if (bytes == -1)
			return (NULL);
	}
	return (line);
}
