/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:38:42 by rarahhal          #+#    #+#             */
/*   Updated: 2021/12/16 18:31:18 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list list, const char format)
{
	int	lenght_prints;

	lenght_prints = 0;
	if (format == 'c')
		lenght_prints += ft_print_char(va_arg(list, int));
	if (format == 's')
		lenght_prints += ft_print_str(va_arg(list, char *));
	if (format == 'p')
		lenght_prints += ft_print_ptr(va_arg(list, unsigned long long));
	if (format == 'd' || format == 'i')
		lenght_prints += ft_print_nbr(va_arg(list, int));
	if (format == 'u')
		lenght_prints += ft_print_unsigned(va_arg(list, unsigned int));
	if (format == 'x' || format == 'X')
		lenght_prints += ft_print_hexa(va_arg(list, unsigned int), format);
	if (format == '%')
		lenght_prints += ft_print_char('%');
	return (lenght_prints);
}

int	ft_printf(const char *str, ...)
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
			lenght_prints += ft_print_char(str[i]);
		i++;
	}
	va_end(list);
	return (lenght_prints);
}
