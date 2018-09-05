/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulouis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:29:19 by gulouis           #+#    #+#             */
/*   Updated: 2018/09/05 15:08:05 by gulouis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int result;
	int i;
	int sign;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 43)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		result = str[i] - 48 + (result * 10);
		i++;
	}
	result = result * sign;
	return (result);
}

int		main(void)
{
	printf("%d\n", ft_atoi("					-15488"));
	printf("%d", atoi("					-15488"));
	return (0);
}
