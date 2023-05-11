/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:59:06 by damachad          #+#    #+#             */
/*   Updated: 2023/05/11 14:36:04 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = 0;
	fd = open("test.txt", O_RDONLY);
	printf("fd = %d\n", fd);
	if (fd < 0)
		printf("Error");
	line = get_next_line(fd);
	printf("%s", line);
	line = NULL;
	line = get_next_line(fd);
	printf("%s", line);
	line = NULL;
	line = get_next_line(fd);
	printf("%s", line);
	line = NULL;
	line = get_next_line(fd);
	printf("%s", line);
	close(fd);
	return (0);
}
