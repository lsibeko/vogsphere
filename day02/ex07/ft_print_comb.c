/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibeko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:22:51 by lsibeko           #+#    #+#             */
/*   Updated: 2020/06/24 10:06:46 by lsibeko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
write(1, &c, 1);
}
void ft_print_comb(int n)
{
	int i;

	i=1;
	while(i <= 9)
	{
		ft_putchar( i + 1 );
		ft_putchar( i = 0 );
		i++;
	}
}
int main()
{
	ft_print_comb(2);;
	return (0);
}
