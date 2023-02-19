/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalchaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:40:44 by dalchaev          #+#    #+#             */
/*   Updated: 2023/02/15 21:27:50 by dalchaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_count_words(const char *str, char c)
{
	int	n;

	n = 0;
	while (*str == c && c != 0)
		str++;
	while (*str != 0)
	{
		if (*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
			n++;
		str++;
	}
	return (n);
}

char	**ft_free_arr(char **arr)
{
	while (*arr)
	{
		free(*arr);
		arr++;
	}
	arr = NULL;
	return (arr);
}

char	**ft_fill_with_words(char **res, const char *str, char c)
{
	int		i;
	int		len;
	char	*wordend;

	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str == 0)
			break ;
		wordend = ft_strchr(str, c);
		if (wordend == NULL)
			wordend = ft_strchr(str, '\0');
		len = wordend - str;
		res[i] = (char *)ft_calloc(len + 1, sizeof(char));
		if (!res[i])
			return (ft_free_arr(res));
		ft_memmove(res[i], str, len);
		str = wordend;
		i++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		wordnum;

	if (!s)
		return (NULL);
	wordnum = ft_count_words(s, c);
	res = (char **)malloc((wordnum + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	ft_fill_with_words(res, s, c);
	return (res);
}
