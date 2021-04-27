/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 22:22:53 by jorge             #+#    #+#             */
/*   Updated: 2021/04/27 22:42:03 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result;
    int i;

    result = 1;
    i = 1;
    if(power == 0 && nb == 0)
        return(1);
    if(power < 0)
        return(0);
    while(i <= power)
    {
        result *= nb;
        i++;
    }
    return(result);
}

int main (void)
{
    int a;

    a = ft_iterative_power(0, 0);
    printf("%d\n", a);
    return(0);
}