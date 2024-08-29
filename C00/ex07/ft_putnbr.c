/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:19:30 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/16 20:08:50 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

int	find_digits(int temp, int divider)
{
	while (temp >= 10)
	{
		temp = temp / 10;
		divider = divider * 10;
	}
	return (divider);
}

void	ft_putnbr(int nb)
{
	int	temp;
	int	divider;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	temp = nb;
	divider = 1;
	divider = find_digits(temp, divider);
	while (divider != 0)
	{
		ft_putchar((nb / divider) + '0');
		nb = nb % divider;
		divider = divider / 10;
	}
}
