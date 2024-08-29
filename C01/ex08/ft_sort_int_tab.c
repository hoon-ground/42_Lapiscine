/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:55:02 by jihookim          #+#    #+#             */
/*   Updated: 2024/08/18 16:40:54 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	quicksort(int left, int right, int *tab, int size)
{
	int	pivot;
	int	i;
	int	j;

	if (left >= right)
		return ;
	pivot = left;
	i = left + 1;
	j = right;
	while (i <= j)
	{
		while ((i <= right) && (tab[i] <= tab[pivot]))
			i++;
		while ((j > left) && (tab[j] >= tab[pivot]))
			j--;
		if (i > j)
			swap(&tab[pivot], &tab[j]);
		else
			swap(&tab[i], &tab[j]);
	}
	quicksort(left, j - 1, tab, size);
	quicksort(j + 1, right, tab, size);
}

void	ft_sort_int_tab(int *tab, int size)
{
	quicksort(0, size - 1, tab, size);
}
