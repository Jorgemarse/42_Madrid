/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:50:18 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/18 11:59:49 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	cont1;
	int	cont2;
	int	aux;

	cont1 = 0;
	cont2 = cont1 + 1;
	while (cont1 < size)
	{
		while (cont2 < size)
		{
			if (tab[cont1] > tab[cont2])
			{
				aux = tab[cont1];
				tab[cont1] = tab[cont2];
				tab[cont2] = aux;
			}
			cont2++;
		}
		cont2 = cont1 + 1;
		cont1++;
	}
}

/*int main (void)
{
	int num[5] = {0, 20, -5, 34, 0};

	ft_sort_int_tab(num, 5);
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", num[i]);
	}
	return (0);
}*/
