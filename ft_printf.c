/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:38:42 by rarahhal          #+#    #+#             */
/*   Updated: 2021/12/02 22:34:17 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list list, const char format)
{
	int	lenght_prints;
	
	lenght_prints = 0;
	if (format == 'c')
		lenght_prints += ft_putchar(va_arg(list, int));
	// if (str[++i] == 's')
	// 	ft_putstr(va_arg(list, char *));
	if (format == '%')
		lenght_prints +=  ft_putchar('%');
	return (lenght_prints);
}

int ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		lenght_prints;
	
	i = 0;
	lenght_prints = 0;
	va_start(list, str);
	
	while (str[i])
	{
		if (str[i] == '%')
		{
			lenght_prints += ft_format(list, str[i + 1]);
			i++;
		}
		else
			lenght_prints += ft_putchar(str[i]);
		i++;
	}
	
	va_end(list);
	return (lenght_prints);
}
