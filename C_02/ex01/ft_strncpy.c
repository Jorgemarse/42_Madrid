/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:40:50 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/21 19:23:18 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	text1[] = "Hola mundo";
	char	text2[] = "Adiós mundo";
	unsigned	int 	n = 4;
	
	ft_strncpy(text2, text1, n);
	printf("%s\n", text2);
	printf("-----\n");
	strncpy(text2, text1, n);
	printf("%s\n", text2);
	return (0);
}*/
