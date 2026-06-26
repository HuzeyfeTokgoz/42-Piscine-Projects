/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 01:30:13 by hutokgoz          #+#    #+#             */
/*   Updated: 2025/10/16 17:47:10 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	*range = (malloc(sizeof(int) * (max - min)));
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (*range == NULL)
	{
		*range = 0;
		return (-1);
	}
	while (max > min)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}
