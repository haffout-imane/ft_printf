/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:08:07 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/31 14:47:57 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned long long nbr)
{
	unsigned int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 16;
		count++;
	}
	return (count);
}

int	ft_puthex(unsigned long long nbr, char c)
{
	unsigned int	count;

	count = ft_len(nbr);
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, c);
	}
	nbr = nbr % 16;
	if (nbr >= 10)
		nbr = nbr + c - 10;
	else
		nbr = nbr + '0';
	ft_putchar(nbr);
	return (count);
}
