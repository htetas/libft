/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:10:21 by hsoe              #+#    #+#             */
/*   Updated: 2024/09/02 11:09:08 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_findlen(int n)
{
	size_t			i;
	unsigned int	nb;

	i = 1;
	if (n < 0)
	{
		nb = (unsigned int)(n * -1);
		i++;
	}
	else
		nb = (unsigned int)n;
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*d;
	unsigned int	nb;
	size_t			i;

	i = ft_findlen(n);
	d = (char *)malloc(sizeof(char) * (i + 1));
	if (d == NULL)
		return (NULL);
	if (n < 0)
		nb = (unsigned int)(n * -1);
	else
		nb = (unsigned int)n;
	d[i--] = '\0';
	while (nb >= 10)
	{
		d[i--] = (char)(nb % 10 + '0');
		nb = nb / 10;
	}
	d[i--] = (char)(nb % 10 + '0');
	if (n < 0)
		d[i] = '-';
	return (d);
}
