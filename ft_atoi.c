/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <hsoe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:23:12 by hsoe              #+#    #+#             */
/*   Updated: 2024/09/03 10:34:41 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	char	*tmp;
	int		nb;
	int		i;
	int		sign;

	tmp = (char *)nptr;
	nb = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(tmp[i]) == 1)
		i++;
	if (tmp[i] == '-' || tmp[i] == '+')
	{
		if (tmp[i] == '-')
			sign = -1;
		i++;
	}
	while (tmp[i] >= '0' && tmp[i] <= '9')
	{
		nb = (nb * 10) + (tmp[i] - '0');
		i++;
	}
	return (nb * sign);
}
