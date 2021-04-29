/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:00:47 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/28 18:29:13 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
}

/*int main(void)
{
	int a;

	a = ft_recursive_factorial(1);
	printf("%d\n", a);
	return(0);
}*/
