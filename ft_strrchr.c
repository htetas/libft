/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:24:06 by hsoe              #+#    #+#             */
/*   Updated: 2024/08/28 12:57:44 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		i;
	int		n;

	i = 0;
	n = -1;
	tmp = (char *)s;
	if ((char)c == '\0')
		return (tmp + ft_strlen(tmp));
	while (s[i] != '\0')
	{
		if (tmp[i] == (char)c)
			n = i;
		i++;
	}
	if (n < 0)
		return (NULL);
	else
		return (tmp + n);
}
