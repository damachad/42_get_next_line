/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:11:20 by damachad          #+#    #+#             */
/*   Updated: 2023/05/11 14:53:25 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10

# endif

size_t	ft_strlen(const char *str);
char	*get_next_line(int fd);
char	*remain_text(char *text);
char	*ft_get_line(char *text);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup_2(const char *s, int size);
char	*ft_strjoin(char *s1, char *s2);

#endif
