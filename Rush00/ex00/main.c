/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:54:51 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/13 17:54:57 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	line(char start, char middle, char end, int a);
void	rush(int x, int y);

int	main(void)
{
	rush(4, 4);
	rush(5, 3);
	rush(1, 5);
	rush(1, 1);
	return (0);
}

void	line(char start, char middle, char end, int a)
{
	int	i;

	i = 0;
	ft_putchar(start);
	if (a > 1)
	{
		while (i < a - 2)
		{
			ft_putchar(middle);
			i++;
		}
		ft_putchar(end);
	}
	ft_putchar('\n');
}
