/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:56:52 by hsoe              #+#    #+#             */
/*   Updated: 2024/08/29 10:03:00 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	i;

	i = 0;
	d = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s1, ft_strlen(s1) + 1);
	while (s2[i] != '\0')
	{
		d[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	d[ft_strlen(s1) + i] = '\0';
	return (d);
}
