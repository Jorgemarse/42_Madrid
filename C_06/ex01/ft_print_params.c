/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:19:30 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/27 14:32:00 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main (int argc, char **argv)
{
	int	i;

	if (argc > 0)
	{
		i = 0;
		while (++i < argc)
			ft_putchar(argv[i]);
	}
	return (0);
}
