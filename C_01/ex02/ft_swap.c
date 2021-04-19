/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:31:31 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/18 12:03:10 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int	main(void)
{
	int	a = 10;
	int	b = 20;

	printf("El valor de a es %d\n", a);
	printf("El valor de b es %d\n", b);
	printf("Cambio de valores:\n");
	ft_swap(&a,&b);
	printf("El valor de a es %d\n", a);
	printf("El valor de b es %d\n", b);
	return (0);
}*/
