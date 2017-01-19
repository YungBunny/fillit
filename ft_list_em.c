/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_em.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:39:24 by cfu               #+#    #+#             */
/*   Updated: 2017/01/18 22:19:48 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*ft_list_em(char *str, t_list *tet_list)
{
	t_list *current_node;

	current_node = ft_lstnew(str, ft_strlen(str));
	if (tet_list->next == NULL)
		tet_list->next = current_node;
	else
		ft_lsteadd(&tet_list, current_node);
	return (tet_list);
}
