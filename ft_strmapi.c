/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:15:03 by dalchaev          #+#    #+#             */
/*   Updated: 2023/02/07 14:45:37 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	i = 0;
	res = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (s[i] != 0)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
