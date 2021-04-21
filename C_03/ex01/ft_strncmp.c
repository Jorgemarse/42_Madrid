/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:02:05 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/21 16:30:02 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (i <= n)
	{
		if (s1[i] == s2[i])
		{
			cont = 0;
		}
		else if (s1[i] != s2[i])
		{
			cont = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (cont);
}

int main (void)
{
	char	text1[50] = "Hola mundo";
	char	text2[50] = "Hola mundo";
	int	i;
	int	j;

	i = ft_strncmp(text1, text2, 4);
	j = strncmp(text1, text2, 4);
	printf("%d\n", i);
	printf("-------------\n");
	printf("%d\n", j);
	return(0);
}