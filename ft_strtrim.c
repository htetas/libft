/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <hsoe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:04:40 by hsoe              #+#    #+#             */
/*   Updated: 2024/09/03 11:33:03 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inset(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_countlen(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (ft_inset(s1[len - 1], set) == 1)
		len--;
	while (ft_inset(s1[i], set) == 1)
		i++;
	len -= i;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*d;

	i = 0;
	while (ft_inset(s1[i], set) == 1)
		i++;
	if (i >= ft_strlen(s1))
	{
		d = (char *)ft_calloc(1, sizeof(char));
		if (d == NULL)
			return (NULL);
	}
	else
		d = ft_substr(s1, i, ft_countlen(s1, set));
	return (d);
}
