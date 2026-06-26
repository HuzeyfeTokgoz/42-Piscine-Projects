/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:13:11 by hutokgoz          #+#    #+#             */
/*   Updated: 2025/10/14 15:20:41 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	size;
	int	i;

	size = ac - 1;
	while (size > 0)
	{
		i = 0;
		while (av[size][i] != '\0')
		{
			write(1, &av[size][i], 1);
			i++;
		}
		write(1, "\n", 1);
		size--;
	}
}
