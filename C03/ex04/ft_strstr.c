/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:15:15 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/23 15:26:17 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		length;
	char	*startptr;

	i = 0;
	length = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		startptr = str + i;
		while (to_find[j] && (str[i + j] == to_find[j]))
		{
			j++;
		}
		if (j == length)
			return (startptr);
		i++;
	}
	return (0);
}
