/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 15:47:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 22:53:09 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;
	void	*contentcpy;
	size_t	cscpy;
	int		i;

	i = 0;
	if (!(new_list = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		cscpy = content_size;
		contentcpy = ft_strnew(cscpy);
		ft_memcpy(contentcpy, content, cscpy);
		new_list->content = contentcpy;
		ft_putstr(contentcpy);
		ft_putchar('\n');
		new_list->content_size = &cscpy;
		ft_getindx(new_list, contentcpy);
		while (i < 4)
		{
			ft_putnbr(new_list->char_spots[i]);
			ft_putchar('\n');
			i++;
		}
		new_list->letter = ft_gettag(contentcpy);
		ft_putchar(new_list->letter);
		ft_putchar('\n');
	}
	new_list->next = NULL;
	return (new_list);
}
