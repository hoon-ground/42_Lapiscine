/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:30:59 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/17 15:17:41 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar((x / 10) + '0');
			ft_putchar((x % 10) + '0');
			ft_putchar(' ');
			ft_putchar((y / 10) + '0');
			ft_putchar((y % 10) + '0');
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
