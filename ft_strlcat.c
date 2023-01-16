/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:29:45 by dalchaev          #+#    #+#             */
/*   Updated: 2023/01/16 17:29:55 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (i < (size - i) && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	if (i + k < size)
		dest[i] = '\0';
	while (src[k] != '\0')
	{
		k++;
	}
	return (i + k);
}
