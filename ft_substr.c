/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <hsoe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:48:52 by hsoe              #+#    #+#             */
/*   Updated: 2024/09/04 13:09:00 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;
	size_t	l;

	i = 0;
	if (!s)
		return (NULL);
	l = len;
	if (ft_strlen(s) - start < len && start < ft_strlen(s))
		l = ft_strlen(s) - start;
	else if (start >= ft_strlen(s))
		l = 0;
	d = (char *)ft_calloc((l + 1), sizeof(char));
	if (d == NULL)
		return (NULL);
	while (i < len && start + i < ft_strlen(s))
	{
		d[i] = s[start + i];
		i++;
	}
	return (d);
}
