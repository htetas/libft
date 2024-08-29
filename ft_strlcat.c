/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:27:53 by hsoe              #+#    #+#             */
/*   Updated: 2024/08/28 14:53:25 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;

	i = 0;
	d = ft_strlen(dst);
	if (size <= d)
		return (ft_strlen(src) + size);
	else
	{
		while (src[i] != '\0' && (i + d + 1 < size))
		{
			dst[d + i] = src[i];
			i++;
		}
		dst[d + i] = '\0';
		return (d + ft_strlen(src));
	}
}
