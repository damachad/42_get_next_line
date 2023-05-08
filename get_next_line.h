/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:11:20 by damachad          #+#    #+#             */
/*   Updated: 2023/05/08 14:00:42 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

# endif

size_t	ft_strlen(const char *str);
char	*get_next_line(int fd);
char	*alloc_copy_line(char *buf, int buf_len);
char	*ft_strdup_2(const char *s, int size);

#endif
