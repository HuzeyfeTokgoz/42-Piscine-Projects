/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:07:25 by hutokgoz          #+#    #+#             */
/*   Updated: 2025/10/16 17:42:31 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	dest = malloc(sizeof(int *) * (max - min));
	if (min >= max || dest == NULL)
	{
		dest = NULL;
		return (dest);
	}
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}
