/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:03:28 by jihookim          #+#    #+#             */
/*   Updated: 2024/09/01 18:46:32 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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

int	total_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;
	int	temp;

	len = 0;
	i = 0;
	temp = size;
	while (size > 0)
	{
		len = len + ft_strlen(strs[i]);
		size--;
		i++;
	}
	while (temp > 1)
	{
		len = len + ft_strlen(sep);
		temp--;
	}	
	return (len);
}

char	*ft_size0check(void)
{
	char	*arr;

	arr = (char *)malloc(sizeof(char));
	arr[0] = '\0';
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (size == 0)
		return (ft_size0check());
	j = total_len(size, strs, sep);
	result = (char *)malloc(sizeof(char) * (j + 1));
	if (result == NULL)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		j = 0;
		while (i != size - 1 && sep[j])
			result[k++] = sep[j++];
		i++;
	}
	result[k] = '\0';
	return (result);
}
