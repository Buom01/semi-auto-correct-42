/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 04:19:18 by badam             #+#    #+#             */
/*   Updated: 2019/06/20 06:02:17 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);
int		ft_strlen(char *str);

int		ft_strctn(char *str1, char *str2, int at)
{
	int	len;
	int	i;

	len = ft_strlen(str2);
	i = 0;
	while (i < len)
	{
		str1[at + i] = str2[i];
		i++;
	}
	str1[at + i] = 0;
	return (len + at);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		seplen;
	int		i;
	int		j;

	len = 1;
	seplen = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (++i < size)
			len += seplen;
	}
	str = malloc(len * sizeof(char));
	i = 0;
	j = 0;
	while (j < size)
	{
		i = ft_strctn(str, strs[j++], i);
		if (j != size)
			i = ft_strctn(str, sep, i);
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_strjoin(5, ft_split("CeciCUTestCUTunCUTsuccesCUT!", "CUT"), " "));
}
