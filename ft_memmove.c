/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <hsoe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:14:02 by hsoe              #+#    #+#             */
/*   Updated: 2024/09/03 11:48:11 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dstr;
	unsigned char	*sstr;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	dstr = (unsigned char *)dest;
	sstr = (unsigned char *)src;
	i = -1;
	if (dstr > sstr)
	{
		while (n)
		{
			dstr[n - 1] = sstr[n - 1];
			n--;
		}
	}
	else
	{
		while (++i < n)
			dstr[i] = sstr[i];
	}
	return (dest);
}
