/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:45:05 by rarahhal          #+#    #+#             */
/*   Updated: 2021/12/15 18:30:41 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexa_len54(unsigned int num)
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

void	ft_convirt2(size_t num, char *stock)
{
	int		i;
	size_t	tmp;
	int		j;
	char	tab[100];

	i = 0;
	j = 0;
	tmp = 0;
	while (num > 0)
	{
		i = num % 16;
		tab[j] = stock[i];
		j++;
		num = num / 16;
	}
	while (j-- >= 0)
		ft_print_char(tab[j]);
}

void	ft_convirt(size_t num)
{
	char	*stock;

	stock = "0123456789abcdef";
	if (num >= 0 && num < 16)
		ft_print_char(stock[num]);
	if (num >= 16)
		ft_convirt2(num, stock);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	write(1, "0x", 2);
	print_length = 2;
	if (ptr == 0)
	{
		write(1, "0", 1);
		print_length += 1;
	}
	else
	{
		ft_convirt(ptr);
		print_length += ft_hexa_len54(ptr);
	}
	return (print_length);
}
