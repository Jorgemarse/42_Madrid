/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:43:39 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/23 11:43:25 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

unsigned int	ft_strlength (char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat (char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	j = i;
	while (src[i - j] && i + 1 < size)
	{
		dest[i] = src [i - j];
		i++;
	}
	if (j < size)
		dest[i] = '\0';
	return (j + ft_strlength(src));
}

/*int main (void)
{
	char	text1[50] = "";
	char	text2[50] = "Adios";
	char	text0[50] = "";
	int 	aux;

	aux = ft_strlcat(text1, text2, 8);
	printf("%d\n%s\n", aux, text1);
	printf("-----\n");
	aux = strlcat(text0, text2, 8);
	printf("%d\n%s\n", aux, text1);
	return(0);
}*/