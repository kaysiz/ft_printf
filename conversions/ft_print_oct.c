/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_oct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:09:34 by ksiziva           #+#    #+#             */
/*   Updated: 2018/08/14 10:37:10 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_oct(int n)
{
	unsigned int	nb;

	nb = n;
	if (nb >= 8)
	{
		ft_print_oct(nb / 8);
		ft_print_oct(nb % 8);
	}
	else
		ft_putchar(nb + 48);
}

void    ft_print_long_oct(long int n)
{
    unsigned long int    nb;

    nb = n;
    if (nb >= 8)
    {
        ft_print_long_oct(nb / 8);
        ft_print_long_oct(nb % 8);
    }
    else
        ft_putchar(nb + 48);
}

void    ft_print_ulong_oct(unsigned long long int nb)
{
    if (nb >= 8)
    {
        ft_print_ulong_oct(nb / 8);
        ft_print_ulong_oct(nb % 8);
    }
    else
        ft_putchar(nb + 48);
}
