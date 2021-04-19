/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcasarru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:05:45 by fcasarru          #+#    #+#             */
/*   Updated: 2021/04/11 20:05:52 by fcasarru         ###   ########.fr       */
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
			if ((j == 0 && i == 0) | (j == y - 1 && i == x - 1))
				ft_putchar('/');
			else if ((j == 0 && i == x - 1) | (j == y - 1 && i == 0))
				ft_putchar('\\');
			else if ((j != 0 && j != y - 1) && (i != 0 && i != x - 1))
				ft_putchar(' ');
			else
				ft_putchar('*');
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}
