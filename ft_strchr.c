/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:10:38 by dalchaev          #+#    #+#             */
/*   Updated: 2023/01/17 14:37:56 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*res;

	res = (char *)str;
	while (*res != '\0')
	{
		if (*res == (char)c)
			return (res);
		else
			res++;
	}
	if (c == '\0')
		return (res);
	else
		res = NULL;
	return (res);
}
