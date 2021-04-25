/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 15:57:27 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/22 16:29:57 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main (void)
{
	char text0[50] = "42dfe l33r";
	char text1[50] = "42dfe l33r";
	char text2[50] = "do";
	char *aux;

	aux = ft_strncat(text0, text2, 3);
	printf("%s\n", aux);
	printf("-----\n");
	aux = strncat(text1, text2, 3);
	printf("%s\n", aux);
	return(0);
}*/