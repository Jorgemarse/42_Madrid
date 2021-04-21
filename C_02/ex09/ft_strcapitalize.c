/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:00:44 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/21 19:19:02 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>	

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] > 96 && str[0] < 123)
			str[i] = str[i] - 32;
		else if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		while (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123) || \
							(str[i] == 32)))
		{	
			i++;
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char text[] = "hola mUndo ::jorge//////maRtin.serr<ano";
	char *i;

	i = ft_strcapitalize(text);
	printf("%s\n", i);
	return(0);
}*/
