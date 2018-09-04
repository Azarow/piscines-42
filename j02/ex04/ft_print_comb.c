/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulouis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 09:25:29 by gulouis           #+#    #+#             */
/*   Updated: 2018/09/03 19:05:30 by gulouis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_it(char a, char b, char c)
{
	if (a == '7')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_do_it(char a, char b, char c)
{
	while (a < '7' || b < '8' || c < '9')
	{
		c++;
		if (c > a && c > b && b > a)
			ft_print_it(a, b, c);
		if (c == '9')
		{
			b++;
			if (b == '9')
			{
				if (a == '7')
					return ;
				b = '0';
				a++;
			}
			c = '0';
		}
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '1';
	ft_do_it(a, b, c);
}
