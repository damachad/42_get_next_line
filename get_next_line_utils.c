/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:16:28 by damachad          #+#    #+#             */
/*   Updated: 2023/05/11 13:39:28 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str != '\0')
	{
		if ((unsigned char)*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)*str == (unsigned char)c)
		return ((char *)str);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	joined = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	while (s1[++i] != '\0')
		joined[i] = s1[i];
	while (s2[j] != '\0')
		joined[i++] = s2[j++];
	joined[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (joined);
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
/*
char	*ft_get_line(char *text)
{
	int		i;
	char	*line;

	if (!text || !text[0])
		return (NULL);
	i = 0;
	while (text[i] && text[i] != '\n')
		i++;
	if (text[i] == '\n')
		i++;
	line = (char *)malloc(1 + i * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (text[i] && text[i] != '\n')
	{
		line[i] = text[i];
		i++;
	}
	if (text[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}
*/

char	*ft_get_line(char *text)
{
	int		i;
	char	*line;

	i = 0;
	if (!text || !text[0])
		return (NULL);
	while (text[i])
	{
		if (text[i] == '\n')
		{
			line = ft_strdup_2(text, i + 1);
			if (!line)
				return (NULL);
			return (line);
		}
		i++;
	}
	line = ft_strdup_2(text, i);
	if (!line)
				return (NULL);
	return (line);
}
