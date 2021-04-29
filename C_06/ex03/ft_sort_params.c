/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_paragrams.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 13:01:49 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/27 14:32:45 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*aux;

	i = 2;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				aux = argv[i - 1];
				argv[i - 1] = argv[i];
				argv[i] = aux;
				i = 1;
			}
			i++;
		}
		i = 2;
		while (i <= argc)
		{
			ft_putstr(argv[i - 1]);
			i++;
		}
	}
	return (0);
}
