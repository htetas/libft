/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:11:47 by hsoe              #+#    #+#             */
/*   Updated: 2024/08/28 14:37:29 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			n;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)big;
	if (little[0] == '\0')
		return ((char *)tmp);
	while (tmp[i] != '\0' && i < len)
	{
		if (tmp[i] == little[0])
		{
			n = 0;
			while (tmp[i + n] == little[n])
			{
				if (little[n + 1] == '\0')
					return ((char *)tmp + i);
				n++;
			}
		}
		i++;
	}
	return (NULL);
}
