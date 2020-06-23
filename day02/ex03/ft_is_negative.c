/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibeko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:10:06 by lsibeko           #+#    #+#             */
/*   Updated: 2020/06/21 14:21:47 by lsibeko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}
void ft_is_negative(int n)
{
	if(n >= 0)
	{
		ft_putchar('P');
	}
	else if(n < 0)
	{
		ft_putchar('N');
	}
}
