/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_charlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 17:13:28 by cfu               #+#    #+#             */
/*   Updated: 2017/01/20 22:27:34 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_put_charlst(t_list *begin_list)
{
	if (begin_list)
	{
		while (begin_list)
		{
			ft_putstr(begin_list->content);
			ft_putchar('\n');
			begin_list = begin_list->next;
		}
	}
}
