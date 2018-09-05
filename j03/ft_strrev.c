/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulouis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:36:34 by gulouis           #+#    #+#             */
/*   Updated: 2018/09/04 16:59:22 by gulouis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strrev(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(i);
		i++;
	}
	return (i);
}

int		main()
{
	char *str;

	ft_strrev("salut");
	return (0);
}
