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
	char	*temp;

	temp = (char *)s + start;
	res = malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	ft_memcpy(res, temp, len);
	return (res);
}
