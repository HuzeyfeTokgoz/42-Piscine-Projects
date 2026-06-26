/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:16:56 by hutokgoz          #+#    #+#             */
/*   Updated: 2025/10/16 17:47:38 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		strslen;
	int		seplen;
	int		i;

	strslen = 0;
	i = 0;
	while (i < size)
		strslen += ft_strlen(strs[i++]);
	seplen = ft_strlen(sep);
	dest = malloc(strslen + (seplen * (size - 1)) + 1);
	if (dest == NULL)
		return (0);
	i = 0;
	dest[i] = '\0';
	while (i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i < size -1)
			dest = ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
