/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:46:16 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/28 19:08:56 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	j;

	j = 1;
	if (nb <= 0 || nb == 1)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (j < nb)
		{
			if (ft_is_prime(nb + j) == 1)
			{
				return (nb + j);
			}
			j++;
		}
	}
	return (0);
}

/*int	main (void)
{
	int	a;

	a = ft_find_next_prime(-2147483644);
	printf("%d\n", a);
	return (0);
}*/
