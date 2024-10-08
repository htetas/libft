/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <hsoe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:42:14 by hsoe              #+#    #+#             */
/*   Updated: 2024/09/04 14:05:48 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(char const *s, char const c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

int	ft_wordsize(char const *s, char const c, size_t n)
{
	size_t	i;

	i = 0;
	while (s[n + i] != c && s[n + i] != '\0')
		i++;
	return (i);
}

void	ft_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**d;
	int		i;
	int		word;

	d = (char **)ft_calloc((ft_countword(s, c) + 1), sizeof(char *));
	if (d == NULL)
		return (NULL);
	i = 0;
	word = -1;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			d[++word] = ft_substr(s, i, ft_wordsize(s, c, i));
			if (d[word] == NULL)
			{
				ft_free(d);
				return (NULL);
			}
			i += ft_wordsize(s, c, i);
		}
		else
			i++;
	}
	return (d);
}
