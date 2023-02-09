/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:40:44 by dalchaev          #+#    #+#             */
/*   Updated: 2023/02/08 15:14:53 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_count_words(const char *str, char c)
{
	int	n;

	n = 0;
	while (*str != 0)
	{
		if (*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
			n++;
		str++;
	}
	return (n);
}

char	**ft_fill_with_words(const char *str, char c, int n)
{
	int		i;
	int		len;
	char	**res;
	char	*wordend;

	i = 0;
	res = (char **)ft_calloc(n + 1, sizeof(char *));
	while (i < n)
	{
		wordend = ft_strchr(str, c);
		if (i == n - 1)
			wordend = ft_strchr(str, '\0');
		len = wordend - str;
		res[i] = (char *)ft_calloc(len + 1, sizeof(char));
		ft_memmove(res[i], str, len);
		str = ft_strchr(str, c);
		if (str)
		{
			while (*str == c)
				str++;
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*temp;
	int		wordnum;

	temp = ft_strtrim(s, &c);
	wordnum = ft_count_words(temp, c);
	res = ft_fill_with_words(temp, c, wordnum);
	if (!res)
		return (NULL);
	free(temp);
	return (res);
}
