/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:20:27 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/22 20:24:24 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length;

	length = 0;
	i = 0;
	j = 0;
	while (dest[i])
	{
		length++;
		i++;
	}
	while (src[j])
	{
		dest[length] = src[j];
		length++;
		j++;
	}
	dest[length] = '\0';
	return (dest);
}
