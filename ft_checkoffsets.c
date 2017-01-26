/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkoffsets.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 01:49:07 by cfu               #+#    #+#             */
/*   Updated: 2017/01/26 02:09:45 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkoffsets(char *brd, int *off_sets, int spot)
{
	int		o;
	int		l;
	int		u;

	o = 0;
	l = 3;
	u = 8;
	if (brd[spot])
	{
		while (off_sets[o])
		{
			while (off_sets[o] > l && off_sets[o] < u)
			{
				if (!brd[spot + o])
					return (0);
				o++;
			}
			l += 4;
			u += 4;
		}
	}
	return (1);
}	
