/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:18:55 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/23 14:39:27 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int main (void)
{
	char text1[50] = "Hola mundo";
	char text2[50] = "";
	int i;
	int j;

	i = ft_strcmp(text1, text2);
	j = strcmp(text1, text2);
	printf("%d\n", i);
	printf("-----------------\n");
	printf("%d\n", j);
	return (0);
}*/