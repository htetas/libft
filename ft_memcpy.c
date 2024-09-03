/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <hsoe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:46:24 by hsoe              #+#    #+#             */
/*   Updated: 2024/09/03 11:48:05 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*sstr;
	unsigned char	*dstr;

	if (!dest && !src)
		return (NULL);
	i = 0;
	sstr = (unsigned char *)src;
	dstr = (unsigned char *)dest;
	while (i < n)
	{
		dstr[i] = sstr[i];
		i++;
	}
	return (dest);
}
