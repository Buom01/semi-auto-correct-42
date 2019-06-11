/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:43:25 by badam             #+#    #+#             */
/*   Updated: 2019/06/11 16:20:43 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	char str[] = "Ceci est un test d'affichage de print memory!\nSegFault";
	ft_print_memory(str, 54);
}
