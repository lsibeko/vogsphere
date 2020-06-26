/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibeko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:50:02 by lsibeko           #+#    #+#             */
/*   Updated: 2020/06/26 16:42:57 by lsibeko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_recursive_power(int nb, int power)
{
	if(power < 0)
		return 0;
	if(power == 0 )
		return 1;
	else
		return(nb*ft_recursive_power(nb,power-1));
}

