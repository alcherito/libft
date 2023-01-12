/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:40:54 by dalchaev          #+#    #+#             */
/*   Updated: 2023/01/12 13:09:04 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void	*ft_memset(void *str, int c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*str = c;
		str++;
		i++;
	}
	return (str);
}
*/
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int	c;
	int	n;
	char	str1[20] = "Hello World!";
	//char	str2[20];

	//str1 = "Hello World!";
	//str2 = "Hello World!";
	c = 'a';
	n = 5;
	memset(str1, c, n);
	//ft_memset(str2, c, n*sizeof(char));
	printf("%s\n", str1);
	//printf("%s\n", str2);
	return (0);
}
