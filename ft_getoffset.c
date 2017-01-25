/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getoffset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:23:38 by cfu               #+#    #+#             */
/*   Updated: 2017/01/24 23:33:24 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		*ft_getoffset(char *str)
{
	int	i;
	int *arr;
	int len;
	int	count;

	i = 0;
	len = ft_strlen(str) - 1;
	count = 0;
	while (str[i++] == '.')
		count++;
	while (str[len--] == '.')
		count++;
	if (!(arr = (int *)ft_memalloc(sizeof(int) * count)))
		return (NULL);
	i = 0;
	len = ft_strlen(str) - 1;
	while (str[i] == '.')
	{
		arr[i] = i;
		i++;
	}
	while (str[len] == '.')
		arr[i++] = len--;
	return (arr);
}

int		main(void)
{
	char	*str;
	int		*arr;
	int		i;

	str = ft_strdup("AAA.A..");
	i = 0;
	arr = ft_getoffset(str);
	while (i < 2)
		printf("%d\n", arr[i++]);
}
