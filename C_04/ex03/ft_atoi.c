/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 16:32:53 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/25 18:05:12 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_atoi (char *str)
{
	int	N;
	int	nbr;

	nbr = 0;
	N = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			N++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += (int)*str - '0';
		str++;
	}
	if (N % 2 != 0)
		nbr = nbr * (-1);
	return (nbr);
}

/*int main (void)
{
	char text[] = " ---+--+1234ab567";	
	int aux;
	
	aux = ft_atoi (text);
	printf("%d\n", aux);
	return(0);
}*/