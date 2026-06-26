/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:21:19 by hutokgoz          #+#    #+#             */
/*   Updated: 2025/10/14 16:45:41 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_printf_av(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
}

int	ft_strcmp(char *src, char *dest)
{
	int	i;

	i = 0;
	while (dest[i] && src[i] && src[i] == dest[i])
		i++;
	return (src[i] - dest[i]);
}

int	main(int ac, char **av)
{
	char	*temp;
	int		i;
	int		size;

	size = ac - 1;
	while (size > 1)
	{
		i = 1;
		while (size > i)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				temp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = temp;
			}
			i++;
		}
		size--;
	}		
	ft_printf_av(ac, av);
}
