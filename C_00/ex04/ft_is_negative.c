/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:49:07 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/12 19:27:30 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
		if (n >= 0)
	{
		ft_putchar ('P');
	}
	else
		ft_putchar ('N');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
