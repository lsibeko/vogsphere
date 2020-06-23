/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibeko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:25:53 by lsibeko           #+#    #+#             */
/*   Updated: 2020/06/23 09:49:24 by lsibeko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (int c)
{
	write(1, &c, 1);
}
void ft_print_comb(void)
{
	char x;
	char y;
	char z;
	x=-1;
		while (x <= '7')
	{
		x=x+1;
		y=x;
		while(y <= 8)
		{
			y=y+1;
			z=y;
			while(z < 9)
			{
			z=z+1
			ft_putchar(x+'0');
			ft_putchar(y+'0');
			ft_putchar(z+'0');
			ft_putchar('.');
			ft_putchar(' ');
			}
		}
	}
}

