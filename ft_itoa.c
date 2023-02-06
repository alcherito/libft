/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:18:27 by dalchaev          #+#    #+#             */
/*   Updated: 2023/02/06 14:38:15 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	long long	temp;
	int		len;

	temp = n;
	len = 0;
	if (n < 0)
	{
		temp = -temp;
		len++;
	}
	while (temp > 0)
	{
		temp = temp / 10;
		len++;
	}
	if (n == 0)
	{
		str = (char *)ft_calloc(2, sizeof(char));
		str[0] = '0';
		return (str);
	}
	str = (char *)ft_calloc(len + 1, sizeof(char));
	len--;
   	temp = n;
	if (temp < 0)
	{
		str[0] = '-';
		temp = -temp;
	} 
	while (len >= 0 && temp > 0)
	{
		str[len] = temp % 10 + '0';
		temp = temp / 10;
		len--;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char    *str;

	str = ft_itoa(0);
	printf("%s\n", str);
}*/
