/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:32:42 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/22 18:35:24 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			x = i;
			while (str[x] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (str + i);
				j++;
				x++;
			}
		}
		i++;
	}
	return (0);
}

/*int main (void)
{
	char str[50] = "Hola me llamo jorge";
	//char str1[50] = "Hola me llamo jorge";
	char word[50]= "";
	char *aux;

	aux = ft_strstr(str, word);
	printf("%s\n", aux);
	printf("------\n");
	aux = strstr(str, word);
	printf("%s\n", aux);
	return(0);
}*/