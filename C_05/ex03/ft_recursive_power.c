/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 23:12:03 by jorge             #+#    #+#             */
/*   Updated: 2021/04/27 23:22:33 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_recursive_power(int nb, int power)
{
    int result;

    if (nb == 0 && power == 0)
        return(1);
        result = nb*ft_recursive_power(nb, power - 1);
    return (result);
}

int main (void)
{
    int a;

    a = ft_recursive_power(2, 5);
    printf("%d\n", a);
    return(0);
}