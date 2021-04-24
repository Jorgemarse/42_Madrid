/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:00:44 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/24 13:05:11 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>	

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		else if (str[i] > 64 && str[i] < 91 && i != 0)
			str[i] = str[i] + 32;
		while (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123) || \
						(str[i] > 47 && str[i] < 58)))
		{	
			i++;
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main (void)
{
	char	text[] = "sAlut,,	 comm2ent ";
	char	*i;

	i = ft_strcapitalize(text);
	printf ("%s\n", ft_strcapitalize(text));
	return (0);
}*/
