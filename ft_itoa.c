/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:18:27 by dalchaev          #+#    #+#             */
/*   Updated: 2023/02/14 18:31:56 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int			len;
	long long	temp;

	len = 0;
	temp = n;
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
		len = 1;
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	temp;
	int			len;

	temp = n;
	len = ft_intlen(n);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	len--;
	if (n < 0)
	{
		str[0] = '-';
		temp = -temp;
	}
	if (n == 0)
		str[0] = '0';
	while (len >= 0 && temp > 0)
	{
		str[len--] = temp % 10 + '0';
		temp = temp / 10;
	}
	return (str);
}
