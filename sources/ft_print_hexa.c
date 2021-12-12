/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:44:39 by rarahhal          #+#    #+#             */
/*   Updated: 2021/12/12 14:55:12 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexa_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_conviret_to_hexa(unsigned int num, const char format)
{
	int		i;
	int		tmp;
	float	nit;
	char	*stock;
	char	*stak;

	i = 0;
	tmp = 0;
	stock = "0123456789abcdef";
	stak = "0123456789ABCDEF";
	while (num != 0)
	{
		tmp = num / 16;
		nit = ((float) num / 16) - tmp;
		i = nit * 16;
		if (format == 'x')
			ft_print_char(stock[i]);
		else
			ft_print_char(stak[i]);
		num = tmp;
	}
}

int	ft_print_hexa(unsigned int num, const char format)
{
	int		lenght_prints;
	char	*stock;
	char	*stak;

	lenght_prints = 0;
	stock = "0123456789abcdef";
	stak = "0123456789ABCDEF";
	if (num == 0)
		lenght_prints += ft_print_char('0');
	if (num >= 16)
	{
		ft_conviret_to_hexa(num, format);
		lenght_prints += ft_hexa_len(num);
	}	
	if (num > 0 && num < 16)
	{
		if (format == 'x')
			lenght_prints += ft_print_char(stock[num]);
		else
			lenght_prints += ft_print_char(stak[num]);
	}
	return (lenght_prints);
}
