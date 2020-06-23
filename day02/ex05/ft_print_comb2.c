/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibeko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:02:38 by lsibeko           #+#    #+#             */
/*   Updated: 2020/06/23 13:28:47 by lsibeko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>
void  ft_putchar(char c)
{
  write(1, &c, 1);
}
void  ft_print_comb2()
{
  char a;
  char b;
  a = 0;
  while(a < 99)
  {
    b = a + 1;
    while(b <= 99)
    {
      ft_putchar(a/10 + '0');
      ft_putchar(a%10 + '0');
      ft_putchar(' ');
      ft_putchar(b/10 + '0');
      ft_putchar(b%10 + '0');
      ft_putchar(',');
      ft_putchar(' ');
      b++;
    }
    a++;
  }
}
int main()
{
  ft_print_comb2();
  ft_putchar('\n');
  return(0);
}
