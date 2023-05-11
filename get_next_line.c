/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:09:58 by damachad          #+#    #+#             */
/*   Updated: 2023/05/11 14:34:42 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*remain_text(char *text)
{
	char	*remainder;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (text[i] != '\0' && text[i] != '\n')
		i++;
	if (text[i] == '\0')
	{
		free(text);
		return (NULL);
	}
	remainder = (char *)malloc((ft_strlen(text) - i) * sizeof(char));
	if (!remainder)
		return (NULL);
	i++;
	while (text[i])
		remainder[j++] = text[i++];
	remainder[j] = '\0';
//	free(text);
	return (remainder);
}

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
