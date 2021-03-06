/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbtetra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:14:26 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/09 16:14:28 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nbtetra(char *buff)
{
	int		i;
	int		n;

	i = 1;
	n = 1;
	while (buff[++i])
	{
		if (buff[i] == '\n' && buff[i - 1] == '\n')
			n++;
	}
	return (n);
}
