/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:13:45 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/27 14:29:28 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr_u(unsigned int nbr)
{
	char	c;
	int		count;

	count = ft_len(nbr);
	if (nbr >= 10)
	{
		ft_putnbr_u(nbr / 10);
		ft_putnbr_u(nbr % 10);
	}
	else
	{
		c = (nbr + '0');
		write(1, &c, 1);
	}
	return (count);
}
