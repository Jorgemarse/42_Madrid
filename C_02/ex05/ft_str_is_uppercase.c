/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:57:01 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/21 18:22:09 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>	

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	if (str[0] == '\0')
		cont = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			cont = 1;
		else
		{
			cont = 0;
			return (cont);
		}
		i++;
	}
	return (cont);
}

/*int	main (void)
{
	int i;
	char *text = "HOLA";

	i = ft_str_is_uppercase(text);
	printf("%d\n", i);
	return (0);
}*/
