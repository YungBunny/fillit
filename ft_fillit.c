/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 17:18:05 by cfu               #+#    #+#             */
/*   Updated: 2017/01/25 21:04:31 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_fillit(t_list *db)
{
	int		spot;
	char	*brd;

	spot = 0;
	if (!(brd = ft_make_board(ft_getboardsz(ft_list_size(db)))))
		return (-1);
	ft_big_solver(brd, db, spot);
	return (0);
}
