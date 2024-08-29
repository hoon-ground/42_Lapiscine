/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunskan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:10:30 by hyunskan          #+#    #+#             */
/*   Updated: 2024/08/24 01:50:59 by hyunskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	num;

	if (check_base(base))
		return ;
	base_len = ft_strlen(base);
	num = nbr;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= base_len)
	{
		ft_putnbr_base(num / base_len, base);
		ft_putnbr_base(num % base_len, base);
	}
	else
		ft_putchar(base[num]);
}
