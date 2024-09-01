/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:24:28 by jihookim          #+#    #+#             */
/*   Updated: 2024/09/01 16:02:08 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	len;
	unsigned int	i;
	int				*temp;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	temp = (int *)malloc(sizeof(int) * len);
	if (temp == NULL)
		return (-1);
	while (i < len)
	{
		temp[i] = min + i;
		i++;
	}
	*range = temp;
	return (len);
}
