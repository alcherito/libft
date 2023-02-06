/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:05:57 by dalchaev          #+#    #+#             */
/*   Updated: 2023/01/21 20:18:52 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	size;

	if (ft_strlen(s) <= start)
		len = 0;
	else
	{
		size = ft_strlen(s + start);
		if (size <= len)
			len = size;
	}
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_memmove(res, s + start, len);
	return (res);
}
