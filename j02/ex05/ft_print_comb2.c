/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulouis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 12:06:54 by gulouis           #+#    #+#             */
/*   Updated: 2018/09/03 20:02:11 by gulouis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int nbr_one;
	int nbr_two;

	nbr_one = 0;
	nbr_two = 0;
	while (nbr_one <= 98)
	{
		while (nbr_two < 99)
		{
			nbr_two++;
			ft_putchar(nbr_one / 10 + '0');
			ft_putchar(nbr_one % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nbr_two / 10 + '0');
			ft_putchar(nbr_two % 10 + '0');
			if (nbr_one < 98 || nbr_two < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		nbr_one++;
		nbr_two = nbr_one;
	}
}
