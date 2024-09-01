/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:02:45 by jihookim          #+#    #+#             */
/*   Updated: 2024/09/01 15:03:48 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	i;
	unsigned int	range;
	int				*temp;

	i = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	temp = (int *)malloc(sizeof(int) * range);
	if (temp == NULL)
		return (NULL);
	while (i < range)
	{
		temp[i] = min + i;
		i++;
	}
	return (temp);
}
