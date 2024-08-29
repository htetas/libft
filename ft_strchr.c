/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:24:06 by hsoe              #+#    #+#             */
/*   Updated: 2024/08/28 12:57:11 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *)s;
	if ((char)c == '\0')
		return (tmp + ft_strlen(tmp));
	while (s[i] != '\0')
	{
		if (tmp[i] == (char)c)
			return (tmp + i);
		i++;
	}
	return (NULL);
}
