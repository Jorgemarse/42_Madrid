/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:23:56 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/23 14:01:23 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdio.h>

void	ft_putnbr(int nb)
{
	nb = nb - '0';
	ft_putchar(nb)
	{
		write(1, &nb, 4);
	}
}

int main(void)
{
	ft_putchar(42)
}