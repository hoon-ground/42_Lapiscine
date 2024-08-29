/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intraID <intraID@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:59:39 by intraID           #+#    #+#             */
/*   Updated: 2024/08/14 13:54:58 by borlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	line(char start, char middle, char end, int a);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	line('A', 'B', 'A', x);
	while (i < y - 2)
	{
		line('B', ' ', 'B', x);
		i++;
	}
	if (y > 1)
	{
		line('C', 'B', 'C', x);
	}
}
