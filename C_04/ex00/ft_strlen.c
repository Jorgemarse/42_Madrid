/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:37:26 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/23 13:06:38 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main (void)
{
	char text[] = "Hola mundo";
	int aux;

	aux = strlen(text);
	printf("%d\n", aux);
	printf("------\n");
	aux = ft_strlen(text);
	printf("%d\n", aux);
	return(0);
}*/