/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:59:32 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/22 17:35:11 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	islowercase(char c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if ((str[0] >= 97) && (str[0] <= 122))
		str[0] = str[0] - 32;
	while (str[i])
	{
		if ((str[i] < 48) && islowercase(str[i + 1]))
			str[i + 1] = str[i + 1] - 32;
		if (((str[i] > 57) && (str[i] < 65)) && islowercase(str[i + 1]))
			str[i + 1] = str[i + 1] - 32;
		if (((str[i] > 90) && (str[i] < 97)) && islowercase(str[i + 1]))
			str[i + 1] = str[i + 1] - 32;
		if (((str[i] > 122) && (str[i] < 127)) && islowercase(str[i + 1]))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
