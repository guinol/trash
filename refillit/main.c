/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 05:00:31 by agarcia-          #+#    #+#             */
/*   Updated: 2017/02/28 05:34:37 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	main(int ac, char **av)
{
	int fd;
	char *buff;

	if (ac != 2)
		return (ft_usage());
	if ((fd = open(av[1], O_RDONLY)) < 0)
		return (ft_error());
	buff = ft_strnew(BUFF_SIZE);
	ft_bzero(buff, BUFF_SIZE);
	if ((read(fd, buff, BUFF_SIZE)) < 0)
		return (ft_error());
	close(fd);
	if (ft_isvalid(buff))
		ft_init(buff, ft_nbtetra(buff));
	else
		return (ft_error());
	return (0);
}
