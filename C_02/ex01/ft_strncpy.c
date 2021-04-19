/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:40:50 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/19 17:46:38 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	i;
	int j;

	i = 0;
	j = 0;
	while(src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	dest[i] = '\0';
	
	return (dest);
}

/*int	main(void)
{
	char	text1[50] = "Hola mundo";
	char	text2[50];
	unsigned	int 	n = 20;
	
	ft_strncpy(text2, text1, n);
	printf("%s\n", text2);
	return (0);
}*/