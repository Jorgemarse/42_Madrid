/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:51:58 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/17 19:44:38 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	aux;

	inicio = 0;
	while (inicio < size)
	{
		aux = tab[inicio];
		tab[inicio] = tab[size - 1];
		tab[size - 1] = aux;
		inicio++;
		size--;
	}
}

/*int main (void)
{
	int num[5] = {10, 15, 20, 25, 30};

	ft_rev_int_tab(num, 5);
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", num[i]);	
	}
	return (0);
}*/
