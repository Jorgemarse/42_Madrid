/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:38:06 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/21 19:29:49 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>	

int	ft_str_is_printable(char *str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	if (str[0] == '\0')
		cont = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 32 && str[i] < 127)
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

/*int main (void)
{
	int	i;
	char *text = "hola";

	i = ft_str_is_printable(text);
	printf("%d\n", i);
	return (0);
}*/
