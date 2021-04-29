/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:01:26 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/29 13:02:31 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index > 0)
		result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}

/*int	main(void)
{
	int	a;

	a = ft_fibonacci(15);
	printf("%d\n", a);
	return (0);
}*/
