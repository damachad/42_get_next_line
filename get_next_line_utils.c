/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:16:28 by damachad          #+#    #+#             */
/*   Updated: 2023/05/08 13:58:28 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup_2(const char *s, int size)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(size * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < size)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*alloc_copy_line(char *buf, int buf_len)
{
	char	*line;
	int		i;

	line = NULL;
	i = 0;
	while (i < buf_len)
	{
		if (buf[i] == '\n')
		{
			line = ft_strdup_2(buf, i + 1);
			if (line == NULL)
				return (NULL);
			return (line);
		}
		i++;
	}
	line = ft_strdup_2(buf, i);
	if (line == NULL)
		return (NULL);
	return (line);
}
/*
char	*alloc_copy_line(char *buf, int buf_len)
{
	char	*line;
	int		i;

	line = NULL;
	i = 0;
	while (i < buf_len)
	{
		if (buf[i] == '\n')
		{
			line = malloc ((i + 2) * sizeof(char));
			if (line == NULL)
				return (NULL);
			ft_memcpy(line, buf, i + 1);
			line[i + 2] = '\0';
			return (line);
		}
		i++;
	}
	line = malloc((i + 1) * sizeof(char));
	if (line == NULL)
		return (NULL);
	ft_memcpy(line, buf, i);
	line[i + 1] = '\0';
	return (line);
}
*/