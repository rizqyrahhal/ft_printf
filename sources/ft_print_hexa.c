#include "../includes/ft_printf.h"

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
}
int	ft_print_hexa(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
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
	// 		lenght_prints = ft_print_str(&str[num]);
	// 	}
	// }
	return (0);
}