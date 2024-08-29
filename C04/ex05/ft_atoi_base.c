/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunskan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 23:37:22 by hyunskan          #+#    #+#             */
/*   Updated: 2024/08/25 14:08:27 by hyunskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	get_digit(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	if (i >= ft_strlen(base))
		return (-1);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	base_len;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (check_base(base))
		return (0);
	base_len = ft_strlen(base);
	while (is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		sign *= 44 - str[i];
		i++;
	}
	while (get_digit(str[i], base) >= 0)
	{
		result = result * base_len + get_digit(str[i], base);
		i++;
	}
	return (result * sign);}
