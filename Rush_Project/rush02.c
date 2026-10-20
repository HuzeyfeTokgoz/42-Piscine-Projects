/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:24:50 by hutokgoz          #+#    #+#             */
/*   Updated: 2025/09/28 18:43:18 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_line(char first, char mid, char last, int len)
{
	int	i;

	ft_putchar(first);
	i = 1;
	while (i <= len - 2)
	{
		ft_putchar(mid);
		i++;
	}
	if (len > 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	sira;

	sira = 1;
	if (x < 1 || y < 1)
		return ;
	ft_print_line('A', 'B', 'A', x);
	while (sira <= y - 2)
	{
		ft_print_line('B', ' ', 'B', x);
		sira++;
	}
	if (y > 1)
		ft_print_line('C', 'B', 'C', x);
}
