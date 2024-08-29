/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:00:27 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/22 13:45:27 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	isprintable(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	unsigned char	*string;
	unsigned char	temp;
	unsigned int	i;

	hex = "0123456789abcdef";
	string = (unsigned char *)str;
	i = 0;
	while (string[i])
	{
		if (isprintable(string[i]))
			write(1, &string[i], 1);
		else
		{
			write(1, "\\", 1);
			temp = string[i] / 16;
			write(1, &hex[temp], 1);
			temp = string[i] % 16;
			write(1, &hex[temp], 1);
		}
		i++;
	}
}
