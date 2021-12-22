/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RizQy <RizQy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:45:05 by rarahhal          #+#    #+#             */
/*   Updated: 2021/12/22 09:51:59 by RizQy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_new_hexa(unsigned long long num)
{
	int		lenght_prints;
	char	*stock;

	lenght_prints = 0;
	stock = "0123456789abcdef";
	if (num >= 16)
	{
		lenght_prints += ft_print_new_hexa(num / 16);
		lenght_prints += ft_print_new_hexa(num % 16);
	}
	if (num < 16)
		lenght_prints += ft_print_char(stock[num]);
	return (lenght_prints);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	print_length += ft_print_new_hexa(ptr);
	return (print_length);
}
