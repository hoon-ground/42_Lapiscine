/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:54:08 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/27 16:13:40 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	while (nb >= result * result && (result <= 46340))
		result++;
	return (result - 1);
}

int	ft_is_prime(int nb)
{
	int	sqrtnum;
	int	i;

	sqrtnum = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i <= sqrtnum)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	check;

	check = ft_is_prime(nb);
	if (check)
		return (nb);
	while (check == 0)
		check = ft_is_prime(++nb);
	return (nb);
}
