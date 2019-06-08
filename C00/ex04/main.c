/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:19:12 by badam             #+#    #+#             */
/*   Updated: 2019/06/08 20:51:45 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

int		main(void)
{
	write(1, "P:", 2);
	ft_is_negative(1);
	write(1, "P:", 2);
	ft_is_negative(0);
	write(1, "P:", 1);
	ft_is_negative(2147483647);

	write(1, "N:", 2);
	ft_is_negative(-1);
	write(1, "N:", 2);
	ft_is_negative(-15);
	write(1, "N:", 2);
	ft_is_negative(-2147483648);
}
