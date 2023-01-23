/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:56:55 by dalchaev          #+#    #+#             */
/*   Updated: 2023/01/23 17:15:00 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = ft_strlen(s1);
	if (ft_strlen(set) == 0 || j == 0)
	{
		res = ft_strdup((char *)s1);
		return (res);
	}
	while (i <= j)
	{
		if (ft_strchr(set, s1[i]))
			i++;
		if (ft_strchr(set, s1[j]))
			j--;
		if (!ft_strchr(set, s1[i]) && !ft_strchr(set, s1[j]))
			break ;
	}
	if (i > j)
		return (ft_strdup(""));
	res = ft_calloc(j - i + 2, sizeof(char));
	ft_strlcpy(res, s1 + i, j - i + 2);
	return (res);
}
