/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:20:27 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/23 13:45:47 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
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
	while ((nb > j) && src[j])
	{
		dest[length] = src[j];
		length++;
		j++;
	}
	dest[length] = '\0';
	return (dest);
}
