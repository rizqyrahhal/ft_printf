/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:45:05 by rarahhal          #+#    #+#             */
/*   Updated: 2021/12/15 16:00:05 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// int	ft_ptr_len(size_t num)
// {
// 	int	len;

// 	len = 0;
// 	while (num != 0)
// 	{
// 		len++;
// 		num = num / 16;
// 	}
// 	return (len);
// }

// void	ft_put_ptr(size_t num)
// {
// 	if (num >= 16)
// 	{
// 		ft_put_ptr(num / 16);
// 		ft_put_ptr(num % 16);
// 	}
// 	else
// 	{
// 		if (num <= 9)
// 			ft_print_char(num + '0');
// 		else
// 			ft_print_char(num - 10 + 'a');
// 	}
// }

// int	ft_print_ptr(unsigned long long ptr)
// {
// 	int	print_length;

// 	print_length = 0;
// 	print_length += write(1, "0x", 2);
// 	if (ptr == 0)
// 		print_length += write(1, "0", 1);
// 	else
// 	{
// 		ft_put_ptr(ptr);
// 		print_length += ft_ptr_len(ptr);
// 	}
// 	return (print_length);
// }


 
void	ft_convirt2(size_t num, char *stock)
{
	int		i;
	size_t		tmp;
	int		j;
	//float	nit;
	char	tab[100];

	i = 0;
	j = 0;
	tmp = 0;
	while (num > 0)
	{
		// tmp = num / 16;
		// nit = ((float) num / 16) - tmp;
		// i = nit * 16;
		i = num % 16;
		tab[j] = stock[i];
		j++;
		num = num / 16;// tmp;
	}
	while (j-- >= 0)
		ft_print_char(tab[j]);
}

void	ft_convirt(size_t num)
{
	// int		lenght_prints;
	char	*stock;

	// lenght_prints = 0;
	stock = "0123456789abcdef";
	if (num >= 0 && num < 16)
			ft_print_char(stock[num]);
	if (num >= 16)
		ft_convirt2(num, stock);
	// return (lenght_prints);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_convirt(ptr);
		// print_length += ft_print_hexa(ptr, 'x');
	}
	return (print_length);
}
