/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:59:19 by badam             #+#    #+#             */
/*   Updated: 2019/06/10 15:24:57 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	int i;
	char dest[] = "Epic fail";
	char src[] = "Success";
	printf("Must all be same (3 lines):\n%s\n%s\n%s\n", src, ft_strncpy(dest, src, 9), dest);
	i = 8;
	while (i < 9)
	{
		if (dest[i] != 0)
		{
			printf("FAIL! Remainder of dst must be filled with `\\0' characters\n");
			return (1);
		}
		i++;
	}
	printf("Success\n");
	return (0);
}
