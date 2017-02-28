/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 05:20:43 by agarcia-          #+#    #+#             */
/*   Updated: 2017/02/28 06:58:30 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char**ft_bord(char **c,int nt)
{
	int i;
	int j;

	i = 0;
	while	 (i < nt + 3)
	{
		j = 0;
		while (j < nt + 3)
		{
			if (j >= nt || i >= nt)
				c[i][j] = '0';
			j++;
		}
		i++;
	}
	return (c);
}


char **ft_inicmin(int cmin)
{
	int i;
	int j;
	char **carre;

	i = 0;
	if (!(carre = (char**)malloc(sizeof(char*) * (cmin + 4))))
		return (0);
	while (i < cmin + 3)
	{
		if(!(carre[i] = (char*)malloc(sizeof(char) * (cmin + 4))))
			return (0);
		j = 0;
		while (j < cmin + 3)
		{
			carre[i][j] = ',';
			j++;
		}
		carre[i][j] = '\0';
		i++;
	}
	carre[i] = "\0";
	carre = ft_bord(carre, cmin);
	ft_printcarre(carre);
	return (carre);
}


/*char**ft_inicarre(int nt)
  {
  int i;
  int j;
  char **carre;

  i = 0;
  if (!(carre = (char**)malloc(sizeof(char*) * (nt + 4))))
  return (0);
  while (i < nt + 3)
  {
  if(!(carre[i] = (char*)malloc(sizeof(char) * (nt + 4))))
  return (0);
  j = 0;
  while (j < nt + 3)
  {
  carre[i][j] = '.';
  j++;
  }
  carre[i][j] = '\0';
  i++;
  }
  carre[i] = "\0";
//carre = ft_bord(carre, nt);
ft_printcarre(carre);
return (carre);
}*/

void	ft_init(char *buff, int nt)
{
	char ***tcube;
	int cmin;
	char **ppc;

	ft_diezletters(buff);
	tcube = ft_tetra3d(ft_totop(ft_buff2d(buff), nt), nt);
	int i = 0;
	while (i < nt)
		ft_printcarre(tcube[i++]);
	cmin = ft_cmin(nt);
	ppc = ft_inicmin(cmin);
	/*while(!ft_solve(tcube, ppc, 0))
	  {
	  ++cmin;
	  ppc = ft_inicarre(cmin + 1);
	  }*/
	//ft_printcarre(ft_inicarre(ft_cmax(nt)));
}
