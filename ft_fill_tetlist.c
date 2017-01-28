/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_tetlist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 19:21:36 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 22:26:06 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*ft_fill_tetlist(int fd)
{
	char	*res;
	int		valid;
	t_list	*tet_list;
	t_list	*res_list;
	size_t	rbyt;
	int		i;

	i = 0;
	rbyt = 21;
	tet_list = ft_lstnew(NULL, 0);
	res_list = tet_list;
	while (rbyt == 21)
	{
		res = ft_gettet(fd, &rbyt);
		valid = 0;
		if ((valid = ft_validate_tets(res)) != -1)
		{
			res = ft_strdup(input_tets[valid]);
			ft_pound_to_letter(res);
			tet_list = ft_list_em(res, tet_list);
		}
	}
	return (res_list);
}
