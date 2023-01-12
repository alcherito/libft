/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:15:34 by dalchaev          #+#    #+#             */
/*   Updated: 2023/01/11 13:43:26 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	n;
	int	r;
	unsigned char	c;

	n = 0;
	c = 'u';
	n = isalpha(c);
	printf("%d\n", n);
	r = ft_isalpha(c);
	printf("%d\n", r);
	return (0);
}*/
