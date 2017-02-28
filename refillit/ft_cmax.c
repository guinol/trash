/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 15:25:10 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/28 06:53:08 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_cmax(int nb_tetra)
{
	int		cmax;

	cmax = nb_tetra / 2 + 4;
	return (cmax);
}

int		ft_cmin(int nb_tetra)
{
	int		cmin;

	while (cmin * cmin < nb_tetra * 4)
		cmin++;
	return (cmin);
}
