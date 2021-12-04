#include "../includes/ft_printf.h"

int	ft_hex_len(unsigned int num)
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

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_print_char(num + '0');
		else
		{
			if (format == 'x')
				ft_print_char(num - 10 + 'a');
			if (format == 'X')
				ft_print_char(num - 10 + 'A');
		}
	}
}

int	ft_print_hexa(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}
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