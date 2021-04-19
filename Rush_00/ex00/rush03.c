/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcasarru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:06:15 by fcasarru          #+#    #+#             */
/*   Updated: 2021/04/11 20:06:30 by fcasarru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			if ((j == 0 | j == y - 1) && (i == 0 ))
				ft_putchar('A');
			else if ((j == 0 | j == y - 1) && (i == x - 1))
				ft_putchar('C');
			else if ((j != 0 && j != y - 1) && (i != 0 && i != x - 1))
				ft_putchar(' ');
			else
				ft_putchar('B');
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}
