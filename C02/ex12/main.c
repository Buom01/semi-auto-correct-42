/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:43:25 by badam             #+#    #+#             */
/*   Updated: 2019/06/11 10:28:33 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	char str[] = "Ceci est un test d'affichage de print memory!\nSegFault";
	ft_print_memory(str, 56);
}
