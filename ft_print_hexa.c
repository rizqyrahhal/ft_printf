/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:44:39 by rarahhal          #+#    #+#             */
/*   Updated: 2021/12/16 18:31:11 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int num, const char format)
{
	int		lenght_prints;
	char	*stock;
	char	*stak;

	lenght_prints = 0;
	stock = "0123456789abcdef";
	stak = "0123456789ABCDEF";
	if (num >= 16)
	{
		lenght_prints += ft_print_hexa(num / 16, format);
		lenght_prints += ft_print_hexa(num % 16, format);
	}
	if (num >= 0 && num < 16)
	{
		if (format == 'x')
			lenght_prints += ft_print_char(stock[num]);
		else
			lenght_prints += ft_print_char(stak[num]);
	}
	return (lenght_prints);
}
