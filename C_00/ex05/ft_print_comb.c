/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:40:10 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/14 12:15:59 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putchar (char h);

void	ft_print_comb (void)
{
	char	a;
	char	b;
	char	c;

	a = '0' - 1;
	while (a++ < '7')
	{
		b = a;
		while (b++ < '8')
		{
			c = b;
			while (c++ < '9')
			{
				if (!(c == '2'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
			}
		}
	}
}	

void	ft_putchar (char h)
{
	write(1, &h, 1);
}
