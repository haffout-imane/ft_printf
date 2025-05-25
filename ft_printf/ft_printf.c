/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:00:06 by ihaffout          #+#    #+#             */
/*   Updated: 2024/01/02 14:06:58 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(const char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	else if ((c == 'd') || (c == 'i'))
		count = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count = ft_putnbr_u(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_puthex(va_arg(args, unsigned int), 'a');
	else if (c == 'X')
		count = ft_puthex(va_arg(args, unsigned int), 'A');
	else if (c == 'p')
	{
		count = ft_putstr("0x");
		count += ft_puthex(va_arg(args, unsigned long long), 'a');
	}
	else
		count = ft_putchar(c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
			count += ft_putchar(str[i]);
		else
		{
			i++;
			if (str[i] == '\0')
				break ;
			count += ft_format(str[i], args);
		}
		i++;
	}
	va_end(args);
	return (count);
}
// int main (void)
// {
//     char  *str = "hello";
//     unsigned int n = -2147483648;

//     ft_printf("%d ^ \n",ft_printf("%s\n", str));
//     printf("%d ^ \n",printf("%s\n", str));

//     ft_printf("%d ^ \n",ft_printf("%d\n", 421337));
//     printf("%d ^ \n",printf("%d\n", 421337));

//     ft_printf("%d ^ \n",ft_printf("%i\n", 421337));
//     printf("%d ^ \n",printf("%i\n", 421337));

//     ft_printf("%d ^ \n",ft_printf("%u\n", n));
//     printf("%d ^ \n",printf("%u\n", n));

//     ft_printf("%d ^ \n",ft_printf("%x\n", 421337));
//     printf("%d ^ \n",printf("%x\n", 421337));

//     ft_printf("%d ^ \n",ft_printf("%X\n", 421337));
//     printf("%d ^ \n",printf("%X\n", 421337));

//     ft_printf("%d ^ \n",ft_printf("%%\n"));
//     printf("%d ^ \n",printf("%%\n"));

// }