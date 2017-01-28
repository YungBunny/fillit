/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:31 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 17:36:12 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_list	*db;

	if (argc < 1)
		return (-1);
	fd = open(argv[1], O_RDONLY);
	db = ft_fill_tetlist(fd);
	ft_putchar_lst(db);
	return (0);
}
