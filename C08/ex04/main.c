/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 21:28:03 by badam             #+#    #+#             */
/*   Updated: 2019/06/22 21:34:21 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int					main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}
