/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:39:57 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/28 19:05:49 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt (int nb)
{
	int	i;

	i = 1;
	while (i * i < nb && nb <= 2147395600)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}

/*int	main (void)
{
	int	a;

	a = ft_sqrt(2147395600);
	printf("%d\n", a);
	return (0);
}*/
