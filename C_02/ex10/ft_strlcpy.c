/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 13:54:40 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/22 19:18:34 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcpy (char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (src[b] != '\0')
		b++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (b);
}

/*int main (void)
{
	char source[] = "Hola mundo";
	char destination[] = "";
	int	i;

	i = ft_strlcpy(destination, source, 4);
	printf("%d\n", i);
	printf("%s", destination);
	return (0);
}*/
