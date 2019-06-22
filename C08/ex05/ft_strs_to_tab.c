/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 02:41:44 by badam             #+#    #+#             */
/*   Updated: 2019/06/22 04:11:58 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*r;
	int			i;

	r = malloc(sizeof(t_stock_str) * (ac + 1));
	if (r == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		r[i].size = ft_strlen(av[i]);
		r[i].str = av[i];
		r[i].copy = malloc(sizeof(char) * (r[i].size + 1));
		if (r[i].copy == 0)
			return (0);
		ft_strcpy(r[i].copy, av[i]);
		i++;
	}
	r[i].str = 0;
	return (r);
}
