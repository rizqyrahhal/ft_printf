/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:44:39 by rarahhal          #+#    #+#             */
/*   Updated: 2021/12/16 13:10:09 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

void	ft_conviret_to_hexa(unsigned int num,
				const char format, char *stock, char *stak)
{
	int		i;
	int		j;
	char	tab[100];

	i = 0;
	j = 0;
	while (num != 0)
	{
		i = num % 16;
		if (format == 'x')
			tab[j] = stock[i];
		else
			tab[j] = stak[i];
		j++;
		num = num / 16;
	}
	while (j-- >= 0)
		ft_print_char(tab[j]);
}

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
		ft_conviret_to_hexa(num, format, stock, stak);
		lenght_prints += ft_hexa_len(num);
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
