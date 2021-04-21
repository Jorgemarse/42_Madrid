/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:51:42 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/21 18:18:37 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	if (str[0] == '\0')
		cont = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
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

/*int	main(void)
{
	char *text = "holamuSndo";
	int i;

	i = ft_str_is_lowercase(text);
	printf("%d\n", i);
	return (0);
}*/
