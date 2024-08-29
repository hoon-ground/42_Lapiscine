/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:58:47 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/27 15:02:21 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	while (nb >= result * result && (result <= 46340))
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
