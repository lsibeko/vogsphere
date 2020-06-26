/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibeko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:37:06 by lsibeko           #+#    #+#             */
/*   Updated: 2020/06/26 14:38:16 by lsibeko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if(nb <0)
		return(0);
	else if(nb >0)
		return(nb *ft_recursive_factorial(nb-1));
	else 
		return(1);
}

