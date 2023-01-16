/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:29:45 by dalchaev          #+#    #+#             */
/*   Updated: 2023/01/16 19:59:16 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while ((i + k + 1) < size && src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	if (i + k < size)
		dest[i + k] = '\0';
	while (src[k] != '\0')
	{
		k++;
	}
	return (i + k);
}
