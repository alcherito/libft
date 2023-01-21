/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:44:55 by dalchaev          #+#    #+#             */
/*   Updated: 2023/01/21 19:51:35 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
		{
			((unsigned char *)dest)[n] = temp[n];
		}
	}
	return (dest);
}	
