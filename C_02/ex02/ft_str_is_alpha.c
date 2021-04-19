/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:42:29 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/19 17:30:22 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	int cont;
	
	cont = 0;
	i = 0;
	if (str[0] == '\0')
	{
		cont = 1;
	}
	else
	{
		while (str[i] != '\0')
		{
			if((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)) 
			{
				cont = 1;
			}
			else 
			{
				cont = 0;
				break;
			}
			i++;
		}
	}
	return (cont);
}

/*int	main(void)
{
	char	text[50] = "6";
	int i;

	i = ft_str_is_alpha(text);
	printf("%d\n", i);
	return(0);
}*/
