/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:44:39 by rarahhal          #+#    #+#             */
/*   Updated: 2021/12/04 18:45:57 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_conviret_to_hexa(unsigned int num, const char format)
{
	int i = 0;
	int tmp = 0;
	char stock[] = "0123456789abcdef";
	char STOCK[] = "0123456789ABCDEF";
	
	while (num != 0)
	{
		tmp = num % 16;
		i = (tmp / 100) % 16;
		if (format == 'x')
			ft_print_char(stock[i]);
		else
			ft_print_char(STOCK[i]);
		num = num / 16;
	}
}

int	ft_print_hexa(unsigned int num, const char format)
{
	int	lenght_prints;
	// int	i;
	// int tmp;
	char stock[] = "0123456789abcdef";
	char STOCK[] = "0123456789ABCDEF";
	
	lenght_prints = 0;
	// i = 0;
	// tmp = 0;
	// if (num >= 16)
	// {
	// 	num = num / 16;
	// 	tmp = num % 16;
	// 	i = (tmp / 100) % 16;
	// }
	if (num >= 16)
		ft_conviret_to_hexa(num , format);
	if (num >= 0 && num < 16)
	{
		if (format == 'x')
			lenght_prints += ft_print_char(stock[num]);
		else
			lenght_prints += ft_print_char(STOCK[num]);
	}
	return(lenght_prints);
}






// int	ft_hex_len(unsigned int num)
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

// void	ft_put_hex(unsigned int num, const char format)
// {
// 	if (num >= 16)
// 	{
// 		ft_put_hex(num / 16, format);
// 		ft_put_hex(num % 16, format);
// 	}
// 	else
// 	{
// 		if (num <= 9)
// 			ft_print_char(num + '0');
// 		else
// 		{
// 			if (format == 'x')
// 				ft_print_char(num - 10 + 'a');
// 			if (format == 'X')
// 				ft_print_char(num - 10 + 'A');
// 		}
// 	}
// }

// int	ft_print_hexa(unsigned int num, const char format)
// {
// 	if (num == 0)
// 		return (write(1, "0", 1));
// 	else
// 		ft_put_hex(num, format);
// 	return (ft_hex_len(num));
// }







// {
// 	if (num >= 16)
// 	{
// 		ft_put_hex(num / 16, format);
// 		ft_put_hex(num % 16, format);
// 	}
// }
// int	ft_print_hexa(unsigned int decimalNumber, const char format)
// {
// 	unsigned int	remainder;
// 	unsigned int	quotient;
// 	unsigned int	tmp;
// 	unsigned int	i;
// 	unsigned int	j;
// 	char			*hexadecimalNumber;

// 	i = 1;
// 	quotient = decimalNumber;
// 	if (decimalNumber == 0)
// 		return (write(1, "0", 1));
// 	while (quotient != 0)
// 	{
// 		tmp = quotient % 16;
// 		if ( tmp < 10)
// 		    tmp =tmp + 48;
// 		else
// 		    tmp = tmp + 55;
// 		hexadecimalNumber[i++]= tmp;
// 		quotient = quotient / 16;
// 	}
// 	j = i - 1;
// 	while (j > 0)
// 	{
// 		ft_print_char(hexadecimalNumber[j]);
// 		j--;
// 	}
	// int	lenght_prints;
	// char str[17] = "0123456789ABCDEF";

	// lenght_prints = 0;
	// if (num >= 0 && num < 16)
	// {
	// 	if (format == 'X')
	// 		lenght_prints = ft_print_str(&str[num]);
	// 	else
	// 	{
	// 		str[17] = "0123456789abcdef";
	// // 		lenght_prints = ft_print_str(&str[num]);
	// // 	}
	// // }
	// return (0);
// }