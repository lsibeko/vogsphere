/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibeko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:48:14 by lsibeko           #+#    #+#             */
/*   Updated: 2020/06/26 16:18:55 by lsibeko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_iterative_power(int nb, int power)
{
	int x;
	int y;

	if(power <0)
		return(0);
	else if(power ==0)
		return(1);
	else
		y=0;
		x=1;
		while(y <power)
		{
			x= x*nb;
			y++;
		}
		return(x);
}

