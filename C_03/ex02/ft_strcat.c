/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:34:06 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/22 15:55:13 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src [j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main (void)
{
	char textmio[50] = "hola";
	char textfunc[50] = "hola";
	char text2[50] = "adios";
	char *aux;



	aux = ft_strcat(textmio, text2);
	printf("%s\n", aux);
	printf("-----\n");
	aux = strcat(textfunc, text2);
	printf("%s\n", aux);
}*/
