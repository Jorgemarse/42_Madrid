/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:18:55 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/21 16:14:59 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			cont = 0;
		else if (s1[i] != s2[i])
		{
			cont = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (cont);
}

/*int main (void)
{
	char text1[50] = "Hola mundo";
	char text2[50] = "Hola Mundo";
	int i;
	int j;

	i = ft_strcmp(text1, text2);
	j = strcmp(text1, text2);
	printf("%d\n", i);
	printf("-----------------\n");
	printf("%d\n", j);
	return (0);
}*/