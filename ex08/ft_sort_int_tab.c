/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaslany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:15:24 by soaslany          #+#    #+#             */
/*   Updated: 2024/12/06 09:53:35 by zhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *arr, int i, int j)
{
	int	temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	min;

	start = 0;
	while (start < size - 1)
	{
		min = 0;
		while (min < size - start - 1)
		{
			if (tab[min] > tab[min + 1])
			{
				swap(tab, min, min + 1);
			}
			min++;
		}
		start++;
	}
}
