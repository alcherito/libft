

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**res;
	char	*temp;
	int		i;
	int		j;
	int		wordnum;
	int		wordlen;

	if (*s == 0)
		return (NULL);
	wordnum = 0; 
	i = 0;
	temp = &c;
	s = ft_strtrim(s, temp);
	while (s[i] != 0)
	{
		if (s[i] == c)
			wordnum++;
		i++;
	}
	wordnum++;
	res = (char **)calloc(wordnum + 1, sizeof(char *));
	j = 0;
	while (j <= wordnum)
	{
		temp = ft_strchr(s, c);
		wordlen = temp - s;
		
		res[j] = (char *)calloc(wordlen + 1, sizeof(char));
		ft_strlcpy(res[j], s, wordlen + 1);
		s = ft_strchr(s, c);
		while (*s == c)
			s++;
	}
	res[j] = NULL;
	return (res);
}
