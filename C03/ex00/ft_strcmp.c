/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:06:42 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/22 19:06:21 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1) || (*s2))
	{
		if ((*s1) > (*s2))
			return (*s1 - *s2);
		if ((*s1) < (*s2))
			return (*s1 - *s2);
		else
		{
			s1++;
			s2++;
		}
	}
	return (0);
}
