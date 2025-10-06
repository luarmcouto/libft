/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 20:44:56 by luarodri          #+#    #+#             */
/*   Updated: 2025/10/06 09:37:59 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_print_file(char *filename, char *color)
{
	int		fd;
	char	*line;

	fd = ft_open_file_read(filename);
	if (fd == -1)
		return (-1);
	while (1)
	{
		line = ft_get_next_line(fd);
		if (!line)
			break ;
		if (color)
			ft_putstr(color);
		ft_putstr(line);
		if (color)
			ft_putstr(RESET_COLOR);
		free(line);
	}
	ft_close_file(fd);
	return (0);
}
